// https://codeforces.com/contest/489/problem/C
// https://codeforces.com/contest/489/submission/22857330

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
   vector<int> min(10, 0), max(10,0);
   int m, s, n, p;
   scanf("%d %d", &m, &s);
   n = m;
   p = s;

   while (m--)
   {
      if (s >= 9) max[9]++, min[9]++, s -= 9;
      else max[s]++, min[s]++, s -= s;
   }

   if (s > 0 || (n > 1 && p == 0)) puts("-1 -1");
   else
   {
      string solMin = "";
      string solMax = "";
      if (min[0] == 1 && n == 1) solMin = "0";
      else
      {
         if (min[1] != 0) solMin += '1', min[1]--;
         else if (min[0] > 0 && n > 1)
         {
            min[0]--;
            for (int i = 2; i <= 9; ++i)
            {
               if (min[i] != 0)
               {
                  min[i]--;
                  solMin += '1';
                  min[i - 1]++;
                  break;
               }
            }
         }

         for (int i = 0; i <= 9; ++i)
         {
            for (int k = 1; k <= min[i]; k++)solMin += (char)(i + '0');
         }
      
      }

      if (max[0] == 1 && n == 1) solMax = "0";
      else
      {
         for (int i = 9; i >= 0; --i)
         {
            for (int k = 1; k <= max[i]; k++)solMax += (char)(i + '0');
         }
      }
      cout << solMin << " " << solMax;
   }

   return 0;
}

