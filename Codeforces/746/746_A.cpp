// https://codeforces.com/contest/746/problem/A
// https://codeforces.com/contest/746/submission/23082946

#include <iostream>
#include <stdio.h>
#include <algorithm>
using namespace std;


int main()
{
   int a, b, c, ans;
   scanf("%d %d %d", &a, &b, &c);
   b = b / 2;
   c = c / 4;
   ans = min(a, min(b, c));
   printf("%d", ans + ans*2 + ans*4);

   return 0;
}