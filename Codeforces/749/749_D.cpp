// https://codeforces.com/contest/749/problem/D
// https://codeforces.com/contest/749/submission/23162259

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <vector>
#include <algorithm>
using namespace std;
#define INT32_MIN (-1)

vector<int> arbore(800005, INT32_MIN);
vector<int> indecsi(800005, INT32_MIN);
vector<int> v[200005];
int maxi = INT32_MIN;
int pos = INT32_MIN;

void update(int node, int left, int right, int value, int pos)
{
   if (left == right)
   {
      arbore[node] = value;
      indecsi[node] = pos;
      return;
   }

   int mid = (left + right) / 2;
   if (pos <= mid) update(2 * node, left, mid, value, pos);
   else update(2 * node + 1, mid + 1, right, value, pos);

   if (arbore[node * 2] > arbore[node * 2 + 1])
   {
      indecsi[node] = indecsi[node * 2];
      arbore[node] = arbore[node * 2];
   }
   else
   {
      indecsi[node] = indecsi[node * 2 + 1];
      arbore[node] = arbore[node * 2 + 1];
   }
}

void Querry(int node, int left, int right, int start, int finish)
{
   if (start <= left && right <= finish)
   {
      if (maxi < arbore[node]) maxi = arbore[node], pos = indecsi[node];
      return;
   }

   int mid = (left + right) / 2;
   if (start <= mid) update(2 * node, left, mid, start, finish);
   if (mid < finish) update(2 * node + 1, mid + 1, right, start, finish);
}

int main()
{
   int n, contestant, bid, x;
   scanf("%d", &n);

   for (int i = 1; i <= n; ++i)
   {
      v[i].push_back(INT32_MIN);
      scanf("%d %d", &contestant, &bid);
      update(1, 1, n, bid, contestant);
      v[contestant].push_back(bid);
   }

   for (int i = 1; i <= n; ++i)
   {
      sort(v[i].begin(), v[i].end());
   }

   int m, sz;
   vector<int>querry;
   scanf("%d", &m);

   for (int i = 0; i < m; ++i)
   {
      querry.clear();
      scanf("%d", &sz);
      pos = INT32_MIN;
      maxi = INT32_MIN;
      for (int j = 0; j < sz; ++j)
      {
         scanf("%d", &x);
         querry.push_back(x);
         update(1, 1, n, INT32_MIN, x);
      }
      Querry(1, 1, n, 1, n);
      if (pos == INT32_MIN) puts("0 0");
      else
      {
         int maximLocal = maxi;
         int posLocal = pos;
         pos = INT32_MIN;
         maxi = INT32_MIN;
         querry.push_back(posLocal);
         update(1, 1, n, INT32_MIN, posLocal);
         Querry(1, 1, n, 1, n);
         if (maxi == maximLocal) printf("0 0\n");
         else
         {
            maximLocal = *(lower_bound(v[posLocal].begin(), v[posLocal].end(), maxi + 1));

            printf("%d %d\n", posLocal, maximLocal);
         }
      }

      for (int p : querry)
      {
         update(1, 1, n, v[p][v[p].size() - 1], p);
      }
   }

   return 0;
}