// https://codeforces.com/contest/680/problem/A
// https://codeforces.com/contest/680/submission/18452312

#include <iostream>
using namespace std;

int main() {

	int v[102], x, i, s, st = 0;
	memset(v, 0, 102 * sizeof(int));
	for (i = 0; i < 5; i++) cin>>x, v[x]++, st += x;
	s = st;
	for (int i = 100; i > 0; i--) {
		if (v[i] >= 3) {
			if (st - i * 3 < s) s = st - i * 3;
		}
		else if (v[i] == 2) {
			if (st - i * 2 < s) s = st - i * 2;
		}
	}
	cout << s;

	return EXIT_SUCCESS;
}