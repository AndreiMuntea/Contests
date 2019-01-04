// https://codeforces.com/contest/583/problem/B
// https://codeforces.com/contest/583/submission/17567732

#include <iostream>
using namespace std;


int main() {
	
	int v[1001], n, nr = -1, cnt = 0, i, j;
	char ok = '0';
	cin >> n;
	for (int i = 0; i < n; i++)cin >> v[i];
	while (cnt < n) {
		nr++;
		if (ok == '0') j = 1, i = 0, ok = '1';
		else j = -1, i = n - 1, ok = '0';
		for (; i < n && i >= 0; i += j) {
			if (v[i] <= cnt) cnt++, v[i] = 1001;
		}
	}
	cout << nr;

	return EXIT_SUCCESS;
}