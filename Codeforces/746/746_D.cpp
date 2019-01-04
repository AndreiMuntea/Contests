// https://codeforces.com/contest/746/problem/D
// https://codeforces.com/contest/746/submission/23107000

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

void doString(string& s, int nmb, char c)
{
   string kappa = "";
   for (int i = 0; i < nmb; ++i)
   {
      kappa += c;
   }
   s += kappa;
}

int main()
{
   int n, k, a, b;
   cin >> n >> k >> a >> b;
   bool ok = true;
   string sol = "";
   int mx;

   while (a > 0 && b > 0)
   {
      if (a > b)
      {
         if (sol != "" && sol[sol.size() - 1] == 'G')
         {
            b--;
            sol += 'B';
         }
         mx = min(a, k);
         doString(sol, mx, 'G');
         a -= mx;
      }
      else
      {
         if (sol != "" && sol[sol.size() - 1] == 'B')
         {
            a--;
            sol += 'G';
         }
         mx = min(b, k);
         doString(sol, mx, 'B');
         b -= mx;
      }
   }
   if (a > k || (a > 0 && sol[sol.size() - 1] == 'G')) ok = false;
   else doString(sol, a, 'G');
   if (b > k || (b > 0 && sol[sol.size() - 1] == 'B')) ok = false;
   else doString(sol, b, 'B');

   sol += '\n';
   if (!ok) puts("NO");
   else cout << sol;
   return 0;
}