// https://codeforces.com/contest/740/problem/A
// https://codeforces.com/contest/740/submission/22715054

#include <iostream>
using namespace std;


int main()
{
   long long s, n, a, b, c, min;
   cin >> n >> a >> b >> c;

   min = LLONG_MAX;

   for (int i = 0; i <= 4; i++)
   {
      for (int j = 0; j <= 4; j++)
      {
         for (int p = 0; p <= 4; p++)
         {
            if ((n + i + 2*j + 3*p) % 4 == 0)
            {
               s = i*a + j * b + p * c;
               if (s < min) min = s;
            }
         }
      }
   }
   cout << min;

   return 0;
}