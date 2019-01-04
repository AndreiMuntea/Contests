// https://codeforces.com/contest/732/problem/B
// https://codeforces.com/contest/732/submission/21650297

#include <stdio.h>
#include <stdlib.h>



int main()
{
   int n, k, v[504], s = 0;

   scanf("%d %d", &n, &k);
   for (int i = 0; i < n; ++i) scanf("%d", &v[i]);

   for (int i = 1; i < n; ++i)
   {
      if (v[i - 1] + v[i] < k)
      {
         s += (k - (v[i - 1] + v[i]));
         v[i] += (k - (v[i - 1] + v[i]));
      }
   }
   printf("%d\n", s);
   for (int i = 0; i < n; ++i) printf("%d ", v[i]);

   return EXIT_SUCCESS;
}