// https://codeforces.com/contest/499/problem/A
// https://codeforces.com/contest/499/submission/17592521

#include <iostream>
using namespace std;




int main() {

	int n, x, t = 0, ra = 1, l, r;
	cin >> n >> x;
	for (; n > 0; n--) {
		cin >> l >> r;
		t += (r - l) + 1;
		for (; ra + x <= l; ra += x);
		if (ra < l) t += (l - ra);
		ra = r + 1;
	}
	cout << t;
	return EXIT_SUCCESS;
}