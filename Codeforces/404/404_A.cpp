// https://codeforces.com/contest/404/problem/A
// https://codeforces.com/contest/404/submission/17155021

#include <iostream>
using namespace std;

int main()
{
	int diag[27], nDiag[27], n;
	memset(diag, 0, 27 * sizeof(int));
	memset(nDiag, 0, 27 * sizeof(int));
	char mat[300][300];

	cin >> n;

	for (int i = 0; i < n; i++)
	{
		getchar();
		for (int j = 0; j < n; j++)
		{
			mat[i][j] = getchar();
			if (i == j || (i == n - j - 1)) diag[mat[i][j] - 'a'] = 1;
			else nDiag[mat[i][j] - 'a'] = 1;
		}
	}

	int count = 0 ,  count2 = 0;
	bool notDiag = true;
	for (int i = 0; i < 27; i++)
	{
		count += diag[i];
		count2 += nDiag[i];
		if (diag[i] != 0 && nDiag[i] != 0) notDiag = false;
	}

	if (count == 1 && notDiag && count2 == 1) cout << "YES";
	else cout << "NO";
	
	return EXIT_SUCCESS;

}