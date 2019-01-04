// https://codeforces.com/contest/743/problem/C
// https://codeforces.com/contest/743/submission/22980441

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <iostream>
using namespace std;


int main()
{
   int n;
   scanf("%d", &n);
   if (n == 1) puts("-1");
   else printf("%d %d %d", n, n + 1, n*(n + 1));

   return 0;
}
