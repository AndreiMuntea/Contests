// https://www.spoj.com/problems/EDIST/

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <vector>
#include <cstdio>
#include <string>
using namespace std;

#define ll long long 
#define ull unsigned long long

/*------------------------------------------------------------------*/

int mat[2005][2005];

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   string s, p;
   int t, n, m, cost;
   cin >> t;
   while(t--)
   {
      cin >> s >> p;
      n = s.length();
      m = p.length();
      
      for (int i = 0; i <= m + 1; ++i) mat[0][i] = i;
      for (int i = 0; i <= n + 1; ++i) mat[i][0] = i;

      for(int i = 1; i<=n;++i)
      {
         for(int j = 1; j<=m;++j)
         {
            cost = 1;
            if (s[i - 1] == p[j - 1]) cost = 0;
            mat[i][j] = min(mat[i - 1][j - 1] + cost, min(mat[i - 1][j] + 1, mat[i][j - 1] + 1));
         }
      }
      cout << mat[n][m] << '\n';
   }


   return 0;
}