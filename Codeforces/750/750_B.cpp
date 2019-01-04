// https://codeforces.com/contest/750/problem/B
// https://codeforces.com/contest/750/submission/23458730

#include <iostream>
#include <string>
using namespace std;


int main()
{
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   
   int n, km, scc = 0, d = 'N';
   bool ok = true;
   string s;

   cin >> n;
   while(n-- && ok)
   {
      if (scc == 0) d = 'N';
      else if (scc == 20000) d = 'S';
      else if (scc < 0 || scc > 20000) ok = false;
      else d = 'U';

      cin >> km >> s;
      if (d == 'N' && s != "South") ok = false;
      else if (d == 'S' && s != "North") ok = false;
      else if (s == "South") scc += km;
      else if (s == "North") scc -= km;
   }
   d = (scc == 0) ? 'N' : 'U';

   (ok && d == 'N') ? puts("YES") : puts("NO");

   return 0;
}