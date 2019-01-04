// https://codeforces.com/contest/38/problem/A
// https://codeforces.com/contest/38/submission/17147878

#include <iostream>
using namespace std;


int main(){

	int v[101], x, n;

	cin >> n;
	v[1] = 0;
	for (int i = 2; i <= n; i++) {
		cin >> x;
		v[i] = v[i - 1] + x;
	}

	cin >> x >> n;
	cout << v[n] - v[x];

	return EXIT_SUCCESS;
}