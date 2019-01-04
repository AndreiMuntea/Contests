// https://codeforces.com/contest/707/problem/A
// https://codeforces.com/contest/707/submission/21341900

#include <stdio.h>
#include <stdlib.h>


int main()
{
   int n, m, elms;
   char c;
   int ok = 0, i = 0;

   scanf("%d %d", &n, &m);

   elms = n * m;
   while (ok == 0 && i++ < elms)
   {
      c = getchar();
      c = getchar();
      ok = (c != 'B' && c != 'W' && c!= 'G');
   }

   (ok == 0) ? puts("#Black&White") : puts("#Color");

   return EXIT_SUCCESS;
}