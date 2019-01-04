// https://codeforces.com/contest/151/problem/A
// https://codeforces.com/contest/151/submission/17418748

#include <iostream>
using namespace std;

#define MIN(a,b) (((a)<(b))?(a):(b))

int main() {

	int n, k, l, c, d, p, nl, np;
	cin >> n >> k >> l >> c >> d >> p >> nl >> np;
	cout << MIN(MIN(k*l / nl, c*d), p/np ) / n;

	return EXIT_SUCCESS;
}