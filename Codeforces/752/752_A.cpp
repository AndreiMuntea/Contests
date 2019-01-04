// https://codeforces.com/contest/752/problem/A
// https://codeforces.com/contest/752/submission/23309643

#include <iostream>
#include <stdio.h>
using namespace std;


int main()
{
   int n, m, k, lanes, desks;
   char c;
   scanf("%d %d %d", &n, &m, &k);
   
   c = (k & 1) ? 'L' : 'R';
   lanes = k / (2 * m ) + 1;
   if (k % (2 * m) == 0) lanes--;
   k = k - (lanes - 1) * (2 * m);
   desks = (k - 1) / 2 + 1;

   printf("%d %d %c\n", lanes, desks, c);

   return 0;
}