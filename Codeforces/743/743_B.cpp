// https://codeforces.com/contest/743/problem/B
// https://codeforces.com/contest/743/submission/22979867

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <iostream>
using namespace std;


int main()
{

   unsigned long long k, poz, el, adv;
   int n;
   cin >> n >> k;
  
   el = 1;
   poz = 1;

   while (poz <= k)
   {
      el++;
      poz <<= 1;
   }

   el--;
   poz >>= 1;
   adv = (unsigned long long) 1 << el;

   for (;;)
   {
      if (poz == k) break;
      else {
         if ((k - poz) % adv == 0) break;
         el--;
         poz >>= 1;
         adv >>= 1;
      }
   }

   cout << el;
   
   return 0;
}
