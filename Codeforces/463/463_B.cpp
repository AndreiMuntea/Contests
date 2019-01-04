// https://codeforces.com/contest/463/problem/B
// https://codeforces.com/contest/463/submission/17433406

#include <iostream>
using namespace std;


int main() {

	int n, x, sum = 0, h = 0, e = 0;
	cin >> n;
	for (; n > 0; n--) {
		cin >> x;
		e += h - x;
		if (e < 0) { sum += -e, e = 0; }
		h = x;
	}
	cout << sum;
	return EXIT_SUCCESS;
}