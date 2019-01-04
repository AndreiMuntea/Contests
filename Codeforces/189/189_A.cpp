// https://codeforces.com/contest/189/problem/A
// https://codeforces.com/contest/189/submission/17418226

#include <iostream>
using namespace std;

#define max(a,b) ((a)>(b) ? (a): (b))

int main() {
	int a, n, v[4001];
	memset(v, 0, 4001 * sizeof(int));
	cin >> n;
	while (cin >> a) 
		for (int i = a; i <= n; i++) 
			if (v[i - a] != 0 || (i%a == 0))
				v[i] = max(v[i - a] + 1, v[i]);
	cout << v[n];
	return EXIT_SUCCESS;
}