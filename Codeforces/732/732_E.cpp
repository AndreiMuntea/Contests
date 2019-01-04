// https://codeforces.com/contest/732/problem/E
// https://codeforces.com/contest/732/submission/21668163

#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <stdlib.h>
#include <vector>
#include <map>
#include <queue>
using namespace std;

typedef struct _STRUCT
{
   int pow;
   int idx;
}STRUCT;


bool compStructs(STRUCT left, STRUCT right)
{
   return (left.pow < right.pow);
}


STRUCT sockets[200005];
vector<int> adaptoare(200005, 0);
vector<int> connected(200005, 0);
map<int, queue<int>> comps;

int n, m;


int main()
{
   int pw, u = 0, c = 0, k = 0, r = 0;
   scanf("%d %d", &n, &m);
  

   for (int i = 1; i <= n; ++i)
   {
      scanf("%d", &pw);
      comps[pw].push(i);
   }

   for (int i = 1; i <= m; ++i) scanf("%d", &sockets[i]), sockets[i].idx = i;
   sort(sockets + 1, sockets + m + 1, compStructs);
  
   for (int i = 1; i <= m; ++i)
   {

      k = 0;
      pw = sockets[i].pow;
      auto it = comps.find(pw);
      while (it == comps.end() && k < 33)
      {
         (pw % 2 == 0) ? r = 0 : r = 1;
         pw = pw / 2 + r;
         it = comps.find(pw);
         k++;
      }

      if (k > 32)
      {
         continue;
      }

      int first = (it->second).front();
      (it->second).pop();
      if (it->second.empty()) comps.erase(it);

      c++;
      u += k;
      adaptoare[sockets[i].idx] = k;
      connected[first] = sockets[i].idx;
   }

   printf("%d %d\n", c, u);

   for (int i = 1; i <= m; ++i) printf("%d ", adaptoare[i]);
   printf("\n");

   for (int i = 1; i <= n; ++i) printf("%d ", connected[i]);

   return 0;
}