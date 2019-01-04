// https://codeforces.com/contest/677/problem/A
// https://codeforces.com/contest/677/submission/18234721

#include <iostream>
using namespace std;


int main() {

	int n, t, x, s, i;
	for (cin >> n >> t >> x, i = 1, s = 0; i < n; i++, cin >> x) (x > t) ? s += 2 : s++; (x > t) ? s += 2 : s++;
	cout << s;

	return EXIT_SUCCESS;
}