// https://codeforces.com/contest/777/problem/B
// https://codeforces.com/contest/777/submission/24969556

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
   ios::sync_with_stdio(false); cin.tie(nullptr), cout.tie(nullptr);
   
   int n;
   string a, b;
   cin >> n >> a >> b;
   int fS[10] = { 0 };
   int fM[10] = { 0 };
   int fMax[10] = { 0 };

   for (auto c : a) fS[c - '0']++, fM[c-'0']++;
   for (auto c : b) fM[c - '0']--, fMax[c - '0']++;

   auto res = 0;
   auto flicks = 0;
   for(auto i = 9; i >= 0; --i)
   {
      if (fM[i] < 0) res += (-1 * fM[i]);
      else
      {
         if (res >= fM[i]) res -= fM[i];
         else
         {
            fM[i] -= res;
            res = 0;
            flicks += fM[i];
         }
      }
   }

   cout << flicks << "\n";

   res = fMax[9];
   flicks = 0;

   for(auto i = 8; i>= 0; --i)
   {
      if (res >= fS[i])
      {
         flicks += fS[i];
         res -= fS[i];
      }
      else
      {
         flicks += res;
         res = 0;
      }
      res += fMax[i];
   }

   cout << flicks;
   return 0;
}