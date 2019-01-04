// https://codeforces.com/contest/550/problem/A
// https://codeforces.com/contest/550/submission/17522891

#include <iostream>
#include <string>
using namespace std;


int main() {

	int mab, Mab, mba, Mba;
	mab = mba = Mab = Mba = -1;
	string s;
	cin >> s;

	for (int i = 0; i < s.size() - 1; i++) {
		if (s[i] == 'A' && s[i + 1] == 'B') {
			if (mab == -1) mab = i;
			Mab = i;
		}
		else if (s[i] == 'B' && s[i + 1] == 'A') {
			if (mba == -1) mba = i;
			Mba = i;
		}
	}
	if (abs(Mab - mba) < 2 && abs(Mba - mab) < 2 || mba == -1 || mab == -1) puts("NO");
	else puts("YES");

	return EXIT_SUCCESS;
}