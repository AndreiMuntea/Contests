// https://codeforces.com/contest/435/problem/A
// https://codeforces.com/contest/435/submission/17434848

#include <iostream>
using namespace std;


int main() {

	int n, m, cnt, s,x;
	cin >> n >> m;
	for (cnt = 1, s = 0; n > 0; n--) {
		cin >> x;
		if (s + x > m) s = x, cnt++;
		else s += x;
	}
	cout << cnt;

	return EXIT_SUCCESS;
}