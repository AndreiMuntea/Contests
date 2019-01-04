// https://codeforces.com/contest/741/problem/C
// https://codeforces.com/contest/741/submission/23044412

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <stdio.h>
using namespace std;

vector<int> colors(200005, 0);
vector<int> graph[200005];
vector<pair<int, int>> perechi;

inline int oppositeColor(int node)
{
   return (colors[node] == 1) ? 2 : 1;
}

bool color(int nodulet)
{
   bool ok = true;
   for (auto vecin : graph[nodulet])
   {
      if (colors[vecin] == colors[nodulet]) ok = false;
      else if (colors[vecin] == 0)
      {
         colors[vecin] = oppositeColor(nodulet);
         ok = ok & color(vecin);
      }
   }
   return ok;
}

int main()
{
   int n, x, y;
   bool ok = true;
   
   scanf("%d", &n);

   for (int i = 0; i < n; ++i)
   {
      graph[2 * i + 1].push_back(2 * i + 2);
      graph[2 * i + 2].push_back(2 * i + 1);
   }

   for (int i = 1; i <= n; ++i)
   {
      scanf("%d %d", &x, &y);
      graph[x].push_back(y);
      graph[y].push_back(x);
      perechi.push_back(make_pair(x, y));
   }

   for (int i = 1; i <= 2 * n; ++i)
   {
      if (colors[i] == 0)
      {
         colors[i] = 1;
         ok = ok & color(i);
      }
   }

   if (!ok)
   {
      puts("-1");
      return 0;
   }

   pair<int, int> pereche;
   for (int i = 0; i < n; ++i)
   {
      pereche = perechi[i];
      printf("%d %d\n", colors[pereche.first], colors[pereche.second]);
   }


   return 0;
}