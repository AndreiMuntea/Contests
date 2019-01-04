// https://codeforces.com/contest/743/problem/A
// https://codeforces.com/contest/743/submission/22978947

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <string>
#include <iostream>
using namespace std;



int main()
{

   int n, a, b;
   string s;
   scanf("%d %d %d", &n, &a, &b);
   --a; --b;
   cin >> s;

   if (s[a] == s[b]) puts("0");
   else puts("1");

   return 0;
}

