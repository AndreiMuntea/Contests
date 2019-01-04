// https://codeforces.com/contest/688/problem/A
// https://codeforces.com/contest/688/submission/22867613

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <string>
#include <iostream>
#include <vector>
using namespace std;


int main()
{
   string s;
   int n, d;
   scanf("%d %d", &n, &d);

   int current = 0;
   int mx = 0;
   int cr = 0;

   for (int i = 0; i < d; ++i)
   {
      cin >> s;
      current = 0;
      for (int k = 0; k < n; ++k)
      {
         if (s[k] == '1') current++;
      }
      if (current == n) cr = 0;
      else cr++;
      if (cr > mx) mx = cr;
   }

   cout << mx;

   return 0;
}
