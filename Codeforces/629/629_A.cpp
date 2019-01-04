// https://codeforces.com/contest/629/problem/A
// https://codeforces.com/contest/629/submission/17462230

#include <iostream>
using namespace std;

int main() {

	int lin[101], col[101], n, s = 0;
	memset(lin, 0, 101 * sizeof(int));
	memset(col, 0, 101 * sizeof(int));
	cin >> n; getchar();

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			if (getchar() == 'C') lin[i]++, col[j]++;
		}
		getchar();
	}
	for (int i = 1; i <= n; i++) s += (lin[i] - 1)*lin[i] / 2 + (col[i] - 1) * col[i] / 2;
	cout << s;

	return EXIT_SUCCESS;
}