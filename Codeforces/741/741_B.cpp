// https://codeforces.com/contest/741/problem/B
// https://codeforces.com/contest/741/submission/23036476

#define _CRT_SECURE_NO_WARNINGS
#include <vector>
#include <stdio.h>
#include <algorithm>
using namespace std;

typedef struct HOS
{
   int beauty;
   int weight;
   HOS() { beauty = 0, weight = 0; }
}HOS;

int parent[1005], bestDP[1005], usedDP[1005];
HOS basics[1005];
HOS combs[1005];
vector<HOS> groupies[1005];

int find(int x)
{
   return (x == parent[x]) ? x : parent[x] = (find(parent[x]));
}

int main()
{
   int n, m, w;
   int x, y;
   int px, py;
   int ans = 0;
   HOS g;

   scanf("%d %d %d", &n, &m, &w);

   for (int i = 1; i <= n; ++i)
   {
      scanf("%d", &basics[i].weight);
   }

   for (int i = 1; i <= n; ++i)
   {
      scanf("%d", &basics[i].beauty);
   }

   for (int i = 1; i <= n; ++i)
   {
      parent[i] = i;
      combs[i] = basics[i];
   }

   for (int i = 1; i <= m; ++i)
   {
      scanf("%d %d", &x, &y);
      px = find(x);
      py = find(y);
      if (px == py) continue;
      combs[px].beauty += combs[py].beauty;
      combs[px].weight += combs[py].weight;
      parent[py] = px;
   }

   for (int i = 1; i <= n; ++i)
   {
      if (i == find(i)) groupies[i].push_back(combs[i]);
      groupies[find(i)].push_back(basics[i]);
   }

   for (int i = 1; i <= n; ++i)
   {
      if (i != find(i)) continue;
      for (size_t p = 0; p < groupies[i].size(); ++p)
      {
         g = groupies[i][p];
         for (int k = w; k > 0; --k)
         {
            if (k - g.weight >= 0)
            {
               bestDP[k] = max(bestDP[k], usedDP[k - g.weight] + g.beauty);
               ans = max(ans, bestDP[k]);
            }
         }
      }
      for (int i = 0; i <= w; ++i) usedDP[i] = bestDP[i];
   }

   printf("%d", ans);
   return 0;
}
