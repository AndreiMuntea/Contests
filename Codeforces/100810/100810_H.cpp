// https://codeforces.com/gym/100810/problem/H
// https://codeforces.com/gym/100810/submission/18206141


#include <iostream>
#include <vector>
#include <string>
#include <string.h>
#include <cmath>
#include <algorithm>
using namespace std;

typedef struct _TEAM {
	string name;
	int gD = 0, gP = 0, index, w = 0, d = 0, l = 0;
	_TEAM(const string& nume, const int& index) :name{ nume }, index{ index } { 
		gD = 0, gP = 0, w = 0, d = 0, l = 0;
	};
}TEAM;

vector<TEAM> tournament;
string results[100][100];

int cautaEchipa(const string& teamName) {
	for (size_t i = 0; i < tournament.size(); ++i) {
		if (tournament[i].name == teamName) return i;
	}
	return -1;
}

void initEchipe(int nrEchipe) {
	for (int i = 0; i <= nrEchipe; i++) {
		for (int j = 0; j <= nrEchipe; j++) {
			results[i][j] = "";
		}
	}
}

int getLen(int numar) {
	int nr = 0;
	if (numar == 0) return 1;
	for (; numar > 0; numar /= 10, nr++);
	return nr;
}

int main() {

	int nrEchipe = -1, meciuri, pozA, pozB;
	string echipa, teamA, teamB, score, del;
	int maxTeamName, maxime[10];

	for (cin >> nrEchipe; nrEchipe != 0; cin >> nrEchipe) {

		maxTeamName = -1;
		tournament.clear();
		del = "+";
		initEchipe(nrEchipe);
		memset(maxime, 0, 10 * sizeof(int));

		for (int i = 1; i <= nrEchipe; i++) {
			cin >> echipa;
			if ((int)echipa.size() > maxTeamName) maxTeamName = (int)echipa.size();
			tournament.push_back(TEAM{ echipa,i });
		}

		echipa = "|";
		for (int i = 1; i <= maxTeamName; ++i) del += "-", echipa+=" ";
		del += "+";
		for (int i = 1; i <= nrEchipe; ++i) del += "---+";

		results[0][0] = echipa;

		for (int i = 0; i < nrEchipe; ++i) {
			echipa = "|"; teamA = "|";
			if (tournament[i].name.size() == 1) echipa = echipa + tournament[i].name + "  ";
			else if (tournament[i].name.size() == 2) echipa = echipa + tournament[i].name + " ";
			else echipa = echipa + tournament[i].name.substr(0, 3);
			if (i + 1 == nrEchipe) echipa += "|";

			teamA += tournament[i].name;
			for (int k = (int)tournament[i].name.size(); k < maxTeamName; k++) teamA += " ";
			teamA += "|";
			results[0][i+1] = echipa;
			results[i + 1][0] = teamA;
		}

		cin >> meciuri;


		for (int i = 1; i <= meciuri; ++i) {
			cin >> teamA >> teamB >> teamB >> score;
			pozA = cautaEchipa(teamA);
			pozB = cautaEchipa(teamB);
			
			results[pozA + 1][pozB + 1] = score;

			tournament[pozA].gD += score[0] - 48;
			tournament[pozA].gP += score[2] - 48;
			tournament[pozB].gD += score[2] - 48;
			tournament[pozB].gP += score[0] - 48;

			if (score[0] > score[2]) {
				tournament[pozA].w++;
				tournament[pozB].l++;
			}
			else if (score[0] < score[2]) {
				tournament[pozA].l++;
				tournament[pozB].w++;
			}
			else {
				tournament[pozA].d++;
				tournament[pozB].d++;
			}
		}

		cout << "RESULTS:\n" << del << "\n";
		for (int i = 0; i <= nrEchipe; i++) {
			for (int j = 0; j <= nrEchipe; j++) {
				if (i != 0 && j != 0) {
					if (i == j) cout << " X |";
					else if (results[i][j] == "") cout << "   |";
					else cout << results[i][j]<<"|";
				}
				else { cout << results[i][j]; }
			}
			cout << "\n"<<del << "\n";;
		}
		cout <<"\nSTANDINGS:\n----------\n";
		sort(tournament.begin(), tournament.end(), [&](const TEAM& teamA, const TEAM& teamB) {
			if (teamA.w * 3 + teamA.d != teamB.w * 3 + teamB.d) return (teamA.w * 3 + teamA.d > teamB.w * 3 + teamB.d);
			if (teamA.gD - teamA.gP != teamB.gD - teamB.gP) return (teamA.gD - teamA.gP > teamB.gD - teamB.gP);
			if (teamA.gD != teamB.gD) return (teamA.gD > teamB.gD);
			if (teamA.w != teamB.w) return (teamA.w > teamB.w);
			return (teamA.index > teamB.index);
		});

		for (int i = 0; i < nrEchipe; i++) {
			maxime[0] = max(maxime[0], getLen(tournament[i].w + tournament[i].d + tournament[i].l));
			maxime[1] = max(maxime[1], getLen(tournament[i].w));
			maxime[2] = max(maxime[2], getLen(tournament[i].d));
			maxime[3] = max(maxime[3], getLen(tournament[i].l));
			maxime[4] = max(maxime[4], getLen(tournament[i].gD) + getLen(tournament[i].gP) + 1);
			maxime[5] = max(maxime[5], getLen(tournament[i].w * 3 + tournament[i].d));
		}
		
		for (int i = 0; i < nrEchipe; i++) {
			if (nrEchipe >= 10 && i < 9) cout << " ";
			cout << i + 1 << ". ";
			echipa = tournament[i].name;
			for (int k = tournament[i].name.size(); k < maxTeamName; k++)echipa += " ";
			cout << echipa<<" ";

			teamA = "";
			echipa = to_string(tournament[i].w + tournament[i].d + tournament[i].l);
			for (int k = echipa.size(); k < maxime[0]; k++) teamA += " ";
			teamA += echipa;
			cout << teamA << " ";

			teamA = "";
			echipa = to_string(tournament[i].w);
			for (int k = echipa.size(); k < maxime[1]; k++) teamA += " ";
			teamA += echipa;
			cout << teamA << " ";

			teamA = "";
			echipa = to_string(tournament[i].d);
			for (int k = echipa.size(); k < maxime[2]; k++) teamA += " ";
			teamA += echipa;
			cout << teamA << " ";


			teamA = "";
			echipa = to_string(tournament[i].l);
			for (int k = echipa.size(); k < maxime[3]; k++) teamA += " ";
			teamA += echipa;
			cout << teamA << " ";

			teamA = "";
			echipa = to_string(tournament[i].gD) + ":" + to_string(tournament[i].gP);
			for (int k = echipa.size(); k < maxime[4]; k++) teamA += " ";
			teamA += echipa;
			cout << teamA << " ";

			teamA = "";
			echipa = to_string(tournament[i].w * 3 + tournament[i].d);
			for (int k = echipa.size(); k < maxime[5]; k++) teamA += " ";
			teamA += echipa;
			cout << teamA << "\n";
		}

		cout << "\n";

	}

	return EXIT_SUCCESS;
}