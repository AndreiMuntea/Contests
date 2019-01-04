// https://codeforces.com/contest/735/problem/A
// https://codeforces.com/contest/735/submission/22532948

#include <iostream>
#include<string>
#include<cstdlib>
#include<algorithm>
using namespace std;


int main()
{
   int n, k;
   int g, t;
   string s;
   cin >> n >> k >> s;
   bool ok = true;
   for (int i = 0; i < s.size(); i++) {
      if (s[i] == 'G')
         g = i;
      if (s[i] == 'T')
         t = i;
   }

   if ((g - t) % k == 0) {
      int A, B;
      A = min(g, t);
      B = max(g, t);

      while (ok && A != B) {

         if (s[A] == '#')
            ok = false;
         A += k;

      }
   }
   else
      ok = false;

   cout << ((ok) ? ("YES") : ("NO"));

   return 0;
}