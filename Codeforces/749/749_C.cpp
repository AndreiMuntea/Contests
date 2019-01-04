// https://codeforces.com/contest/749/problem/C
// https://codeforces.com/contest/749/submission/23153097

#include<string>
#include<iostream>
using namespace std;


int main()
{
   int n;
   string s;
   cin >> n >> s;
   string p;
   int D = 0;
   int R = 0;
   string q;
   while (s.size() != 1)
   {
      n = s.size();
      p = "";
      for (int i = 0; i < n; ++i)
      {
         if (s[i] == 'D')
         {
            if (D == 0) R--, p += 'D';
            else D++;
         }
         else
         {
            if (R == 0) D--, p += 'R';
            else R++;
         }
      }
      if (s == p) break;
      s = p;

   }

   cout << s[0];

   return 0;
}