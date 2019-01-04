// https://codeforces.com/contest/749/problem/A
// https://codeforces.com/contest/749/submission/23144602

#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
using namespace std;


int main()
{
   int n;
   int nr;
   bool o3 = false;
   scanf("%d", &n);

   if (n & 1) o3 = true, n -= 3;
   nr = n / 2;

   if (o3) printf("%d\n3 ", nr + 1);
   else printf("%d\n",nr);
   while (nr--) printf("2 ");

   return 0;
}