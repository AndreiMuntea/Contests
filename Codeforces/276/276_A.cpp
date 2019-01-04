// https://codeforces.com/contest/276/problem/A
// https://codeforces.com/contest/276/submission/17523475

#include <iostream>
using namespace std;

#define MAX 0x3B9ACA01

int main() {

	int n, k, max = -MAX, joy, t;
	cin >> n >> k;
	for (; n > 0; n--) {
		cin >> joy >> t;
		if (k >= t) {
			if (max < joy)max = joy;
		}
		else if (max < joy - (t - k)) max = joy - (t - k);
	}
	cout << max;

	return EXIT_SUCCESS;
}