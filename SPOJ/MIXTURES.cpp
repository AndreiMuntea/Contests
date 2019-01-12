// https://www.spoj.com/problems/MIXTURES/

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

ull mat[105][105], col[105], smoke[105][105];
int n;

int main()
{
   //ios_base::sync_with_stdio(false) , cin.tie(nullptr) , cout.tie(nullptr);


   while (cin>>n)
   {
      for (int i = 1; i <= n; ++i) cin >> col[i], mat[i][i] = col[i];
      for (int i = 1; i <= n - 1; ++i) smoke[i][i + 1] = col[i] * col[i + 1], mat[i][i + 1] = (col[i] + col[i + 1]) % 100;
      for (int d = 2; d <= n - 1; ++d)
      {
         for (int i = 1; i <= n - d; ++i)
         {
            smoke[i][i + d] = numeric_limits<ull>::max();
            for (int k = i, pr = i +d; k <= pr; ++k)
            {
               if (smoke[i][i + d] > mat[i][k] * mat[k + 1][i + d] + smoke[i][k] + smoke[k + 1][i + d])
               {
                  smoke[i][i + d] = mat[i][k] * mat[k + 1][i + d] + smoke[i][k] + smoke[k + 1][i + d];
                  mat[i][i + d] = (mat[i][k] + mat[k + 1][i + d]) % 100;
               }
            }
         }
      }
      if (n == 1) smoke[1][1] = 0;
      cout << smoke[1][n] << "\n";
   }


   return 0;
}
