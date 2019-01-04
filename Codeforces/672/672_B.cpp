// https://codeforces.com/contest/672/problem/B
// https://codeforces.com/contest/672/submission/17927993

#include <iostream>
#include <string>
using namespace std;



int main() {
	int n, v[27];
	string s;
	cin >> n;
	if (n >= 27) puts("-1");
	else {
		cin >> s;
		int i, nr;
		memset(v, 0, 27 * sizeof(int));
		for (i = 0, nr = 0; i < (int)s.size(); i++) {
			v[s[i] - 'a']++;
			if (v[s[i] - 'a'] > 1) nr++;
		}
		cout << nr;
	}
	return EXIT_SUCCESS;
}