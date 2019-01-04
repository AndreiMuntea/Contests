// https://codeforces.com/contest/745/problem/A
// https://codeforces.com/contest/745/submission/23052557

#include <stdio.h>
#include <iostream>
#include <set>
#include <string>
using namespace std;


void shift(string& s)
{
   string p;
   p = s.substr(1, s.size() - 1);
   p += s[0];
   s = p;
}

int main()
{
   string s;
   set<string> multime;
   cin >> s;
   multime.insert(s);
   for (int i = 1; i <= (int)s.size() + 1; ++i)
   {
      shift(s);
      multime.insert(s);
   }
   cout << multime.size();
   return 0;
}