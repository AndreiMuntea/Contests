// https://codeforces.com/contest/745/problem/C
// https://codeforces.com/contest/745/submission/23064233

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

int parent[1004];
int kids[1004];
int muchii[1004];
map<int, bool> rep;
vector<int>reps;

void swap(int&x, int&y)
{
   int aux = x;
   x = y;
   y = aux;
}

int find(int x)
{
   return (x == parent[x]) ? x : parent[x] = find(parent[x]);
}

int main()
{
   int n, m, k, reprez, x, y, px, py;
   scanf("%d %d %d", &n, &m, &k);

   for (int i = 1; i <= n; i++)
   {
      parent[i] = i;
      kids[i] = 1;
   }

   for (int i = 1; i <= k; ++i)
   {
      scanf("%d", &reprez);
      rep[reprez] = 1;
   }

   for (int i = 1; i <= m; ++i)
   {
      scanf("%d %d", &x, &y);
      px = find(x);
      py = find(y);
      if (rep[px] == 1) swap(px, py);
      if (px != py) parent[px] = py, kids[py] += kids[px], muchii[py] += muchii[px];
      muchii[py]++;
   }

   int contor = 0;
   int freeNodes = 0;
   int freeMuchii = 0;
   for (int i = 1; i <= n; ++i)
   {
      if (find(i) != i) continue;
      contor += ((kids[i] * (kids[i] - 1)) / 2 - muchii[i]);
      if (rep[i] == 1) reps.push_back(kids[i]);
      else
      {
         freeMuchii += freeNodes*kids[i];
         freeNodes += kids[i];
      }
   }
   sort(reps.begin(), reps.end());
   int mx = reps[reps.size() - 1];
   freeMuchii += mx * freeNodes;
   contor += freeMuchii;

   printf("%d", contor);
   return 0;
}