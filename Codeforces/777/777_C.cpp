// https://codeforces.com/contest/777/problem/C
// https://codeforces.com/contest/777/submission/25124989

#include <stdio.h>
#include <vector>
#include <algorithm>
#include <unordered_map>
using namespace std;


int main()
{

   unordered_map<int, vector<int>> mat;
   unordered_map<int, vector<int>> crescator;
   int n, m, x;

   scanf("%d %d", &n, &m);
   vector<int> rows(m + n + 1, 0);
   for (auto i = 1; i <= m; ++i) mat[i].push_back(0), crescator[i].push_back(0);


   for(auto i = 1; i <= n; ++i)
   {
      for(auto j = 1; j <= m; ++j)
      {
         scanf("%d", &x);
         crescator[j].push_back(mat[j].back() <= x ? crescator[j].back() + 1 : 1);
         mat[j].push_back(x);
         rows[i] = max(rows[i], crescator[j].back());
      }
   }

   int q, l, r;
   bool ok;

   for(scanf("%d",&q); q-- ;)
   {
      scanf("%d %d", &l, &r);
      ok = rows[r] >= r - l + 1;
      puts(!ok ? "No" : "Yes");
   }

   
   return 0;
}