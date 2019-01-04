// https://codeforces.com/contest/703/problem/A
// https://codeforces.com/contest/703/submission/21342039

#include <stdio.h>
#include <stdlib.h>


int main()
{

   int n, M = 0, C = 0, m, c;
   scanf("%d", &n);
   while (n--)
   {
      scanf("%d %d", &m, &c);
      if (m != c)
      {
         (m > c) ? M++ : C++;
      }
   }
   (M == C) ? puts("Friendship is magic!^^") : (M > C) ? puts("Mishka") : puts("Chris");

   return EXIT_SUCCESS;
}