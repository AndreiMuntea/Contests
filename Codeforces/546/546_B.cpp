// https://codeforces.com/contest/546/problem/B
// https://codeforces.com/contest/546/submission/17523253

#include <iostream>
#include <algorithm>
using namespace std;

int main() {

	int n, s = 0, v[3002], x;
	memset(v, 0, 3002 * sizeof(int));
	cin >> n;
	for (int i = 0; i < n; i++) {
		cin >> x;
		v[x]++;
	}
	for (int i = 1; i <= n; i++) {
		if (v[i] > 1) s += v[i] - 1, v[i + 1] += v[i] - 1;
	}
	s += v[n+1] * (v[n+1] - 1) / 2;
	cout << s;
	return EXIT_SUCCESS;
}