// https://codeforces.com/contest/716/problem/A
// https://codeforces.com/contest/716/submission/21733770

#include <stdio.h>
#include <stdlib.h>


int main()
{

   int c, n, ct = 1, f, cur;
   scanf("%d %d %d", &n, &c, &f);
   for (int i = 1; i < n; ++i)
   {
      scanf("%d", &cur);
      if (cur - f> c)
      {
         ct = 1;
      }
      else ct++;
      f = cur;
   }
   printf("%d", ct);

   return EXIT_SUCCESS;
}