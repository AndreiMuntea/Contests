// https://codeforces.com/contest/463/problem/A
// https://codeforces.com/contest/463/submission/17434138

#include <iostream>
using namespace std;


int main() {

	int $$,c,n, s, max = -1;
	cin >> n >> s;
	for (; n > 0; n--) {
		cin >> $$ >> c;
		if (s - $$ >= 0) {
			if (s - $$ > 0 && c != 0 && 100 - c > max) max = 100 - c;
			else if (c == 0 && max == -1) max = 0;
		}
	}
	cout << max;

	return EXIT_SUCCESS;
}