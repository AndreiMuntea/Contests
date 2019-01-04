// https://codeforces.com/contest/472/problem/C
// https://codeforces.com/contest/472/submission/18054753

#include <iostream>
#include <cstdlib>
#include <string>
#include <cstdio>
#include <vector>
#include <algorithm>
using namespace std;

class Elev {
public:
	string nume;
	string prenume;
	Elev(const string& nume, const string& prenume) : nume{ nume }, prenume{ prenume } {};
	Elev() :nume{ "" }, prenume{ "" } {};
};

int main() {
	int n, poz;
	bool ok = true;
	Elev first, last;
	string nume, prenume;
	vector <Elev> v;
	cin >> n;

	for (int i = 1; i <= n; i++) {
		cin >> nume >> prenume;
		v.push_back(Elev(nume, prenume));
	}

	cin >> poz;
	nume = min(v[poz - 1].nume, v[poz - 1].prenume);
	int i = 2;
	while (i <= n && ok == true) {
		cin >> poz;
		last = v[poz - 1];
		if (last.nume >= nume && last.prenume < nume) nume = last.nume;
		else if (last.prenume >= nume && last.nume < nume) nume = last.prenume;
		else if (last.nume >= nume && last.prenume >= nume) nume = min(last.nume, last.prenume);
		else { ok = false; }
		i++;
	}

	(ok) ? puts("YES") : puts("NO");

	return EXIT_SUCCESS;
}
