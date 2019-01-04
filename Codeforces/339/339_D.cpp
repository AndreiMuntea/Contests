// https://codeforces.com/contest/339/problem/D
// https://codeforces.com/contest/339/submission/25572718

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <algorithm>
#include <vector>
#include <map>
#include <string>
using namespace std;

#define ll long long 
#define ull unsigned long long 
/*--------------------------------------------------------------------------------------*/

typedef struct node
{
   ll value;
   bool xorField;
   node() { value = 0; xorField = true; }
}node;

const int MAXN = 1 << 18;


node arb[4 * MAXN + 66];
int n, m;

void update(int node, int start, int end, int& pos, ll& val)
{
   if (start == end)
   {
      arb[node].value = val;
      arb[node].xorField = true;
      return;
   }

   int mid = (start + end) / 2;
   if (pos <= mid) update(node * 2, start, mid, pos, val);
   else update(node * 2 + 1, mid + 1, end, pos, val);

   arb[node].xorField = !arb[node * 2].xorField;
   if (arb[node].xorField) arb[node].value = arb[node * 2].value ^ arb[node * 2 + 1].value;
   else arb[node].value = arb[node * 2].value | arb[node * 2 + 1].value;
}


int main()
{
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);


   scanf("%d", &n);
   scanf("%d", &m);

   ll x;
   n = 1 << n;
   for (int i = 1; i <= n; ++i)
   {
      scanf("%I64d", &x);
      update(1, 1, n, i, x);
   }

   int pos;
   for (int i = 1; i <= m; ++i)
   {
      scanf("%d %I64d", &pos, &x);
      update(1, 1, n, pos, x);
      printf("%I64d\n", arb[1].value);
   }



   return 0;
}
