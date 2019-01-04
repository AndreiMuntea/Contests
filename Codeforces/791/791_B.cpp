// https://codeforces.com/contest/791/problem/B
// https://codeforces.com/contest/791/submission/25625859

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

const int NMAX = 150006;
int n, m;
vector<int> graph[NMAX];
int vis[NMAX];

ll noduri, muchii;

void dfs(int node)
{
   vis[node] = 1;
   noduri++;

   for(auto g: graph[node])
   {
      muchii++;
      if (vis[g] == 0)
      {
         dfs(g);
      }
   }
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   int x, y;
   scanf("%d %d", &n, &m);
   for(int i = 0; i< m; ++i)
   {
      scanf("%d %d", &x, &y);
      graph[x].push_back(y);
      graph[y].push_back(x);
   }
   bool ok = true;
   for(int i = 1; i<=n; ++i)
   {
      if(vis[i] == 0)
      {
         noduri = muchii = 0;
         dfs(i);
         if (muchii != (noduri *(noduri - 1))) ok = false;
      }
   }
   (ok) ? cout << "YES\n" : cout << "NO\n";



   return 0;
}