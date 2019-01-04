// https://codeforces.com/contest/672/problem/A
// https://codeforces.com/contest/672/submission/17927943

#include <iostream>
using namespace std;


int main() {

	int n, c, i, k;
	cin >> n;
	for (i = 1, c = 1; i < n && i <= 9; i++, c++);
	for (i = 10, k = 10; i <= n && k<=99; i += 2, k++) {
		if (i == n) c = k / 10;
		else if (i + 1 == n) c = k % 10;
	}
	for (k = 100; i <= n; i += 3, k++) {
		if (i == n) c = k / 100;
		else if (i + 1 == n) c = (k / 10) % 10;
		else if (i + 2 == n) c = k % 10;
	}
	cout << c;

	return EXIT_SUCCESS;
}