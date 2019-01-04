// https://codeforces.com/contest/606/problem/C
// https://codeforces.com/contest/606/submission/17916901

#include <iostream>
using namespace std;


int main() {

	int v[100002], n, x, mx = 0;
	memset(v, 0, 100002 * sizeof(int));
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		v[x] = 1 + v[x - 1];
		if (v[x] > mx) mx = v[x];
	}
	cout << n - mx;

	return EXIT_SUCCESS;
}