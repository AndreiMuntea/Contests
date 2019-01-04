// https://codeforces.com/contest/489/problem/B
// https://codeforces.com/contest/489/submission/17433045

#include <iostream>
#include <algorithm>
using namespace std;


int main() {

	int n, m, a[100], b[100];
	cin >> n;
	for (int i = 0; i < n; i++) cin >> a[i];
	cin >> m;
	for (int i = 0; i < m; i++) cin >> b[i];
	sort(a, a + n, [](int left, int right) {return left > right; });
	sort(b, b + m, [](int left, int right) {return left > right; });
	int i = 0, j = 0, count = 0;
	while (i < n && j < m) {
		if (a[i] > b[j] + 1) i++;
		else if (b[j] > a[i] + 1) j++;
		else i++, j++, count++;
	}
	cout << count;
	return EXIT_SUCCESS;
}