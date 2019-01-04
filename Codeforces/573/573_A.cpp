// https://codeforces.com/contest/573/problem/A
// https://codeforces.com/contest/573/submission/17470800

#include <iostream>
using namespace std;


int main() {
	int a, n, rez;
	cin >> n >> a;
	for (; a % 2 == 0; a /= 2);
	for (; a % 3 == 0; a /= 3);
	rez = a;
	for (; n-1 > 0; n--) {
		cin >> a;
		for (; a % 2 == 0; a /= 2);
		for (; a % 3 == 0; a /= 3);
		if (a != rez) { puts("NO"); return 0; }
	}
	puts("YES");

	return EXIT_SUCCESS;
}