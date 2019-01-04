// https://codeforces.com/contest/725/problem/A
// https://codeforces.com/contest/725/submission/21672549

#include <iostream>
#include <string>
using namespace std;

int main()
{
   int n;

   int cnt = 0;
   int all = 0;

   string s;
   cin >> n >> s;
   size_t sz = s.size();
   bool ok;

   ok = (s[0] == '<');
   (ok) ? all++ : cnt++;

   for (auto i = 1; i < sz; ++i)
   {
      if (s[i] == '<')
      {
         cnt = 0;
         if (ok) all++;
      }
      else
      {
         cnt++;
         ok = false;
      }
   }
   all += cnt;

   cout << all;

   return 0;

}