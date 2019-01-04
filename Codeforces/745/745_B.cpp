// https://codeforces.com/contest/745/problem/B
// https://codeforces.com/contest/745/submission/23059000

#include <iostream>
#include <string>
using namespace std;


int main()
{
   string s, cmp;
   int n, m;
   cin >> n >> m >> s;
   bool ok = true;
   bool x = false;
   while (--n)
   {
      cin >> cmp;
      if (s == cmp) goto peste;
      if (s.find('X') == string::npos && cmp.find('X') != string::npos) goto peste;
      if (s.find('X') != string::npos && cmp.find('X') == string::npos) goto peste;
      ok = false;
      peste:
         s = cmp;
   }
   (ok) ? puts("YES") : puts("NO");
   return 0;
}