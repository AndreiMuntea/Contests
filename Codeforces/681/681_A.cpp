// https://codeforces.com/contest/681/problem/A
// https://codeforces.com/contest/681/submission/18456914

#include <iostream>
#include <string>
using namespace std;


int main() {
	int n, b, a;
	string s;
	bool ok = false;
	cin >> n;
	for (; n > 0; n--) {
		cin >> s >> b >> a;
		if (b >= 2400 && a > b) ok = true;
	}
	(ok) ? puts("YES") : puts("NO");


	return EXIT_SUCCESS;
}