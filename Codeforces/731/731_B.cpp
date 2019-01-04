// https://codeforces.com/contest/731/problem/B
// https://codeforces.com/contest/731/submission/21570145

#include <iostream>
using namespace std;


int main()
{
   int n, x, cup = 0;
   bool ok = true;

   cin >> n;
   for (int i = 0; i < n; ++i)
   {
      cin >> x;
      if (cup == 1) x--;
      if (x < 0) ok = false;
      cup = x % 2;
   }
   ok = ok && (cup == 0);
   (ok) ? puts("YES") : puts("NO");
   return EXIT_SUCCESS;
}