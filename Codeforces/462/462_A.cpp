// https://codeforces.com/contest/462/problem/A
// https://codeforces.com/contest/462/submission/17418438

#include <iostream>
using namespace std;


int main()
{
	char matrix[102][102];
	memset(matrix, 'x', 102 * 102 * sizeof(char));
	int n, count;
	bool ok = true;

	cin >> n; getchar();
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++)
			matrix[i][j] = getchar();
		getchar();
	}

	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= n; j++) {
			count = 0;
			if (matrix[i - 1][j] == 'o') count++;
			if (matrix[i + 1][j] == 'o') count++;
			if (matrix[i][j - 1] == 'o') count++;
			if (matrix[i][j + 1] == 'o') count++;
			if (count & 1) ok = false;
		}
	}
	
	if (ok) cout << "YES";
	else cout << "NO";

    return EXIT_SUCCESS;
}

