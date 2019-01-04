// https://codeforces.com/contest/752/problem/C
// https://codeforces.com/contest/752/submission/23310300

#include <iostream>
#include <string>
using namespace std;


int main()
{
   int n;
   int cnt = 0, xAxis = 0, yAxis = 0;
   string s;

   cin >> n >> s;
   for (int i = 0; i < n; ++i)
   {
      if (s[i] == 'U')
      {
         if (yAxis == 2) cnt++, xAxis = 0;
         yAxis = 1;
      }
      else if (s[i] == 'D')
      {
         if (yAxis == 1) cnt++, xAxis = 0;
         yAxis = 2;
      }
      else if (s[i] == 'R')
      {
         if (xAxis == 2) cnt++, yAxis = 0;
         xAxis = 1;
      }
      else if (s[i] == 'L')
      {
         if (xAxis == 1) cnt++, yAxis = 0;
         xAxis = 2;
      }
   }

   cout << cnt + 1;

   return 0;
}