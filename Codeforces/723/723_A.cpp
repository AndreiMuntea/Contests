// https://codeforces.com/contest/723/problem/A
// https://codeforces.com/contest/723/submission/21321216

#include <stdio.h>
#include <stdlib.h>
#include <algorithm>
#include <math.h>
using namespace std;



int main()
{
   int v[3];
   for (size_t i = 0; i < 3; ++i) scanf("%d", &v[i]);

   sort(v, v + 3);
   printf("%d", v[2] - v[0]);

   return 0;
}