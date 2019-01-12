// https://www.spoj.com/problems/MARTIAN/

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

int n, m;
int yeyenium[505][505], bloggium[505][505], ans[505][505];


int main()
{
   ios_base::sync_with_stdio(false) , cin.tie(nullptr) , cout.tie(nullptr);

   cin >> n >> m;
   while (n != 0 && m != 0)
   {
      for (int i = 1; i <= n; ++i)
      {
         for (int j = 1; j <= m; ++j)
         {
            cin >> yeyenium[i][j];
            yeyenium[i][j] += yeyenium[i][j - 1];
         }
      }

      for (int i = 1; i <= n; ++i)
      {
         for (int j = 1; j <= m; ++j)
         {
            cin >> bloggium[i][j];
            bloggium[i][j] += bloggium[i - 1][j];
         }
      }

      for(int i = 1; i<=n; ++i)
      {
         for(int j = 1; j<=m; ++j)
         {
            ans[i][j] = max(ans[i - 1][j] + yeyenium[i][j], ans[i][j - 1] + bloggium[i][j]);
         }
      }

      cout << ans[n][m] << "\n";
      cin >> n >> m;

   }


   return 0;
}
