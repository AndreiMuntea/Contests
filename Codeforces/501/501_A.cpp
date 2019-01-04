// https://codeforces.com/contest/501/problem/A
// https://codeforces.com/contest/501/submission/16639055

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int a, b, c, d, m1, m2;
	cin >> a >> b >> c >> d;
	m1 = max(3 * a / 10, a - a / 250 * c);
	m2 = max(3 * b / 10, b - b / 250 * d);
	if (m1 > m2) cout << "Misha";
	else if (m1 == m2) cout << "Tie";
	else cout << "Vasya";
	return EXIT_SUCCESS;
}