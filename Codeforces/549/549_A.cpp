// https://codeforces.com/contest/549/problem/A
// https://codeforces.com/contest/549/submission/17147407

#include <iostream>
using namespace std;

void check(char x, int tab[27])
{
	if (x == 'f' || x == 'a' || x == 'c' || x == 'e') tab[x - 'a']++;
}

bool face(int x, int y, char mat[52][52])
{
	int tab[27];
	memset(tab, 0, 27 * sizeof(int));
	check(mat[x][y],tab);
	check(mat[x + 1][y],tab);
	check(mat[x][y + 1],tab);
	check(mat[x + 1][y + 1],tab);
	return ((tab['a' - 'a'] == 1) &&
			(tab['e' - 'a'] == 1) &&
			(tab['c' - 'a'] == 1) &&
			(tab['f' - 'a'] == 1));
}

int main()
{
	char mat[52][52];
	int n, m, cont = 0;

	cin >> n >> m;

	for (int i = 1; i <= n + 1; i++) {
		for (int j = 1; j <= m + 1; j++) {
			if ( i == n + 1 || j == m + 1) mat[i][j] = 'X';
			else cin >> mat[i][j];
		}
	}

	for (int i = 1; i <= n; i++)
		for (int j = 1; j <= m; j++)
			if (face(i,j,mat)) cont++;
	cout << cont;

	return EXIT_SUCCESS;
}

