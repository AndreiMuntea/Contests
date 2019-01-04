// https://codeforces.com/contest/746/problem/B
// https://codeforces.com/contest/746/submission/23086002

#include <string>
#include <iostream>
using namespace std;


int main()
{
   int sz;
   string s;
   int ct = 0;
   cin >> sz >> s;
   string p;
   while (sz--)
   {
      if (sz & 1) p = s[0] + p;
      else p = p + s[0];
      s = s.substr(1, s.size() - 1);
   }
   cout << p;
   return 0;
}