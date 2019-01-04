// https://codeforces.com/contest/606/problem/B
// https://codeforces.com/contest/606/submission/17916859

#include <iostream>
#include <string>
using namespace std;



int main() {
	int n, m, x, y, sm = 1, i;
	int mat[505][505];
	memset(mat, 0, 505 * 505 * sizeof(int));
	
	string s;
	cin >> n >> m >> x >> y >> s;
	mat[x][y] = 1;
	cout << "1 ";
	for (i = 0; i < (int)s.size() - 1; ++i) {
		if (s[i] == 'D') {
			x++;
			if (mat[x][y] == 0) {
				if (x > n) cout << "0 ", x--;
				else cout << "1 ", sm++, mat[x][y] = 1;
			}
			else {
				cout << "0 ";
			}
		}
		if (s[i] == 'U') {
			x--;
			if (mat[x][y] == 0) {
				if (x < 1) cout << "0 ", x++;
				else cout << "1 ", sm++, mat[x][y] = 1;
			}
			else {
				cout << "0 ";
			}
		}
		if (s[i] == 'R') {
			y++;
			if (mat[x][y] == 0) {
				if (y > m) cout << "0 ", y--;
				else cout << "1 ", sm++, mat[x][y] = 1;
			}
			else {
				cout << "0 ";
			}
		}
		if (s[i] == 'L') {
			y--;
			if (mat[x][y] == 0) {
				if (y < 1) cout << "0 ", y++;
				else cout << "1 ", sm++, mat[x][y] = 1;
			}
			else {
				cout << "0 ";
			}
		}
	}
	cout << m*n - sm;
	return EXIT_SUCCESS;
}