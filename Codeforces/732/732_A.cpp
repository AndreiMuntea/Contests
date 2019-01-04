// https://codeforces.com/contest/732/problem/A
// https://codeforces.com/contest/732/submission/21642425

#include <stdio.h>
#include <stdlib.h>


int main()
{
   int k, r, rz;
   scanf("%d %d", &k, &r);

   for (int i = 1; i <= 10; ++i)
   {
      rz = i * k;
      if (rz % 10 == 0 || (rz - r) % 10 == 0)
      {
         printf("%d", i);
         break;
      }
   }


   return EXIT_SUCCESS;
}