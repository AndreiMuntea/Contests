// https://codeforces.com/contest/722/problem/B
// https://codeforces.com/contest/722/submission/21723154

#include <iostream>
#include <string.h>
using namespace std;

bool is_vowel(char c)
{
   return (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' || c == 'y');
}

int main()
{
   int nr, n, v[102];
   char s[105];
   cin >> n;
   bool ok = true;

   for (int i = 0; i < n; ++i) cin >> v[i];
   fgets(s, 105, stdin);
   for (int i = 0; i < n; ++i)
   {
      nr = 0;
      fgets(s, 105, stdin);
      size_t sz = strlen(s);
      for (size_t k = 0; k < sz; ++k)
      {
         if (is_vowel(s[k])) nr++;
      }
      if (nr != v[i]) ok = false;
   }
   (ok) ? puts("YES") : puts("NO");

   return 0;
}