// https://codeforces.com/contest/712/problem/C
// https://codeforces.com/contest/712/submission/21841423

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

#define MIN(a,b) (((a) < (b)) ? (a) : (b))
#define MAX(a,b) (((a) > (b)) ? (a) : (b))


int main()
{
   int a, b, c, goal, steps = 0;
   bool ok = false;

   scanf("%d %d", &goal, &a);
   b = c = a;

   while (!ok)
   {
      ok = true;
      if (a != goal)
      {
         ok = false;
         a = MIN(b + c - 1, goal);
         steps++;
      }
      if (b != goal)
      {
         ok = false;
         b = MIN(a + c - 1, goal);
         steps++;
      }
      if (c != goal)
      {
         ok = false;
         c = MIN(a + b - 1, goal);
         steps++;
      }
   }

   printf("%d\n", steps);

   return EXIT_SUCCESS;

}