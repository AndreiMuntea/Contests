// https://codeforces.com/contest/618/problem/A
// https://codeforces.com/contest/618/submission/18010612

#include <iostream>
using namespace std;


int main() {

	int n, t, s;

	cin >> n;
	while (n > 0) {
		t = 0;
		s = 1;
		for (; s <= n; s <<= 1) t++;
		s >>= 1;
		n -= s;
		cout << t << " ";
	}

	return EXIT_SUCCESS;
}