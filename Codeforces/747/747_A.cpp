// https://codeforces.com/contest/747/problem/A
// https://codeforces.com/contest/747/submission/23259014

#include <iostream>
#include <algorithm>
using namespace std;


int main()
{

   int n;
   int mxa, mxb, mx;
   cin >> n;
   mxa = 1; 
   mxb = n;
   mx = n - 1;
   for (int i = 2; i < n; ++i)
   {
      if (n % i == 0)
      {
         if (abs(n / i - i) < mx)
         {
            mx = abs(n / i - i);
            mxa = min(n / i, i);
            mxb = max(n / i, i);
         }
      }
   }

   cout << mxa << " " << mxb;

   return 0;
}