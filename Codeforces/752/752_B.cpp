// https://codeforces.com/contest/752/problem/B
// https://codeforces.com/contest/752/submission/23310052

#include <iostream>
#include <string>
#include <map>
using namespace std;


int main()
{
   map<char, char> m;
   string s, t;
   int cnt = 0;

   cin >> s >> t;
   bool ok = true;
   int size = s.size();
   for (int i = 0; i < size; ++i)
   {
      if (s[i] == t[i])
      {
         if (m.find(s[i]) != m.end())
         {
            if (m[s[i]] != t[i]) ok = false;
         }
         else m[s[i]] = t[i], m[t[i]] = s[i];
      }
      else if (m.find(s[i]) == m.end() && m.find(t[i]) == m.end())
      {
         m[s[i]] = t[i];
         m[t[i]] = s[i];
      }
      else
      {
         if (m[s[i]] != t[i]) ok = false;
      }
      if (!ok) break;
   }
   for (auto key : m)
   {
      if (key.second != '-') cnt++, m[key.second] = '-';
      if (key.second == key.first) cnt--;
   }

   if (!ok) puts("-1");
   else
   {
      cout << cnt << "\n";
      for (auto key : m)
      {
         if (key.second != '-') cout << key.first << " " << key.second << "\n";
      }
   }

   return 0;
}