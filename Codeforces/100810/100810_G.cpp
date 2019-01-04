// https://codeforces.com/gym/100810/problem/G
// https://codeforces.com/gym/100810/submission/18255909

#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<int, vector<int>> frecv;
int cd[200005], ord[200005];

int main() {
	int poz, max, n, m, x;
	bool ok;

	for (cin >> n >> m; n != 0 && m != 0; cin >> n >> m) {

		ok = true;
		frecv.clear();
		for (int i = 0; i <= 200002; i++) cd[i] = -1, ord[i] = -1;
		for (int i = 1; i <= n; i++) {
			cin >> x;
			poz = -1; 
			max = -1;
			for (int j = 1; j <= m; j++) {
				if (cd[j] <= x && cd[j] >= max) {
					max = cd[j];
					poz = j;
				}
			}
			if (poz == -1) ok = false;
			else {
				cd[poz] = x;
				frecv[x].push_back(poz);
			}
			ord[i] = poz;
		}
		if (!ok) cout << "Transportation failed\n";
		else {
			for (int i = 1; i <= n; i++) {
				cout << ord[i]<<" ";
			}
			cout << "\n";
			for (auto it = frecv.begin(); it != frecv.end(); it++) {
				for (int j = 0; j < (int)it->second.size(); j++) {
					cout << it->second[j]<< " ";
				}
			}
			cout << "\n";
		}

	}

	return 0;
}