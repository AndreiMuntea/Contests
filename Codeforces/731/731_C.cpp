// https://codeforces.com/contest/731/problem/C
// https://codeforces.com/contest/731/submission/21641965

#include <iostream>
#include <stdio.h>
#include <vector>
#include <string.h>
#include <map>
using namespace std;

vector<int> colors(200005,0);
vector<int> graph[200005];
bool visited[200005];
map<int, int> cls;
int maxCol = 0;
int maxFrecv = 0;

void dfs(int node)
{
   visited[node] = 1;
   for (auto nd : graph[node])
   {
      if (visited[nd] == 0)
      {
         if (maxCol < ++cls[colors[nd]]) maxCol = cls[colors[nd]];
         ++maxFrecv;
         dfs(nd);
      }
   }
}

int main()
{
   int n, m, k, x, y;
   
   scanf("%d %d %d", &n, &m, &k);
   for (int i = 1; i <= n; ++i) cin >> colors[i];
   for (int i = 0; i < m; ++i)
   {
      scanf("%d %d", &x, &y);
      graph[x].push_back(y);
      graph[y].push_back(x);
   }

   int all = 0;

   for (int i = 1; i <= n; ++i)
   {
      if (visited[i] == 0)
      {
         cls.clear();
         cls[colors[i]] = 1;
         maxCol = 1;
         maxFrecv = 1;
         dfs(i);
         all += (maxFrecv - maxCol);

      }
   }

   printf("%d", all);


   return 0;
}