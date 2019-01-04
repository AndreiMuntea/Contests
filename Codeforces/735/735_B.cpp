// https://codeforces.com/contest/735/problem/B
// https://codeforces.com/contest/735/submission/22540632

#include <iostream>
#include <algorithm>
#include <vector>
#include <cstdio>
using namespace std;

bool cmp(int a, int b)
{
   return b < a;
}

int main()
{
   int n, m, k;
   double s1a, s1b, s2a, s2b;
   scanf("%d %d %d", &n, &m, &k);
   vector<int> v(n, 0);

   for (int i = 0; i < n; ++i)
   {
      scanf("%d", &v[i]);
   }

   s1a = s1b = s2a = s2b = 0;
   sort(v.begin(), v.end(), cmp);

   for (int i = 0; i < m; ++i) s1a += v[i];
   for (int i = m, q = k; q > 0; q--, i++) s1b += v[i];

   for (int i = 0; i < k; ++i) s2a += v[i];
   for (int i = k, q = m; q > 0; q--, i++) s2b += v[i];

   double s1 = s1a / m + s1b / k;
   double s2 = s2a / k + s2b / m;

   printf("%.7lf",max(s1, s2));


   return 0;
}