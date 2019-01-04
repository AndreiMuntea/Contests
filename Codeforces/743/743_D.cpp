// https://codeforces.com/contest/743/problem/D
// https://codeforces.com/contest/743/submission/22983812

#include <vector>
#include <stdio.h>
#include <algorithm>
#include <iostream>
using namespace std;

vector<int> graph[200005];
vector<long long> cost(200005, 0);
vector<bool> visited(200005, false);
vector<long long> maxSuma(200005, LLONG_MIN);
int n;
long long ans = LLONG_MIN;

void dfs(int nodulet)
{
   visited[nodulet] = true;
   long long mare  = LLONG_MIN;
   long long mare2 = LLONG_MIN;
   long long sumaFii = 0;

   for (auto vecin : graph[nodulet])
   {
      if (visited[vecin] == true) continue;
      dfs(vecin);
      sumaFii += cost[vecin];
      if (maxSuma[vecin] >= mare)
      {
         mare2 = mare;
         mare = maxSuma[vecin];
      }
      else if (maxSuma[vecin] > mare2)
      {
         mare2 = maxSuma[vecin];
      }
   }
   cost[nodulet] += sumaFii;
   maxSuma[nodulet] = max(mare, cost[nodulet]);
   if (mare != LLONG_MIN && mare2 != LLONG_MIN) ans = max(ans, mare + mare2);
}

int main()
{
   scanf("%d", &n);
   for (int i = 1; i <= n; ++i) scanf("%I64d", &cost[i]);
   int x, y;
   for (int i = 0; i < n - 1; ++i)
   {
      scanf("%d %d", &x, &y);
      graph[x].push_back(y);
      graph[y].push_back(x);
   }
   dfs(1);

   if (ans == LLONG_MIN) puts("Impossible");
   else cout << ans;

   return 0;
}