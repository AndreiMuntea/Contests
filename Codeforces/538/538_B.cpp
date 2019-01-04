// https://codeforces.com/contest/538/problem/B
// https://codeforces.com/contest/538/submission/17462106

#include <iostream>
using namespace std;

int main() {

	int n, v[10], max = 0;
	bool ok;
	memset(v, 0, 10 * sizeof(int));
	cin >> n;
	for (int i = 1; n != 0; n /= 10, ++i) {
		v[i] = n % 10; if (v[i] > max) max = v[i];
	}
	cout << max << endl;
	for (int i = 1; i <= max; i++) {
		ok = false;
		for (int j = 9; j > 0; j--) {
			if (v[j] != 0) ok = true, putchar('1'), v[j]--;
			else if (v[j] == 0 && ok) putchar('0');
		}
		putchar(' ');
	}

	return EXIT_SUCCESS;
}