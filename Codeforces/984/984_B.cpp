// https://codeforces.com/contest/984/problem/B
// https://codeforces.com/contest/984/submission/38439439

#include <algorithm>
#include <vector>
#include <iostream>
#include <stdio.h>
using namespace std;

bool IsDigit(char x)
{
	return (x >= '0' && x <= '9');
}

int GetDigit(char x)
{
	return x - '0';
}


int main()
{
	int n, m;
	
	vector<int> dX = { -1, -1, 0, 1, 1, 1, 0, -1 };
	vector<int> dY = { 0, 1, 1, 1, 0, -1, -1, -1 }; 
	bool ok = true;
	string line;
	char matrix[102][102] = {0};

	scanf("%d %d", &n,&m);
	for(int i = 1; i<=n; ++i)
	{
	    getchar();
        scanf("%s",&(matrix[i][1]));
		for(int j = 1; j<=m; ++j)
		{
			if (matrix[i][j] == '.')
			{
				matrix[i][j] = '0';
			}
		}
	}
	
	for(int i = 1; i <= n; ++i)
	{
		for(int j = 1; j <= m; ++j)
		{
			if (!IsDigit(matrix[i][j]))
			{
				continue;
			}
			
			int d = GetDigit(matrix[i][j]);
			int matches = 0;
			
			for(int k = 0; k < 8; ++k)
			{
				int ox = i + dX[k];
				int oy = j + dY[k];
				
				if (matrix[ox][oy] == '*')
				{
					matches++;
				}
				
			}
			
			if(matches != d)
			{
				ok = false;
			}
		}
	}
	
	cout << (ok ? "YES" : "NO") << "\n";
	
	return 0;
}