// https://codeforces.com/contest/705/problem/A
// https://codeforces.com/contest/705/submission/21340464

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int n, i = 0;

   scanf("%d", &n);

   for (i = 1; i < n; ++i)
   {
      (i % 2 == 0) ? printf("I love that ") : printf("I hate that ");
   }

   (n % 2 == 0) ? printf("I love it") : printf("I hate it");

   return EXIT_SUCCESS;
}