// https://codeforces.com/contest/729/problem/A
// https://codeforces.com/contest/729/submission/22715444

#include <iostream>
#include <string>
using namespace std;


int main()
{
   string sol = "";
   int n;
   string s;
   cin >> n >> s;

   size_t i = 0;
   size_t j;
   while (i < s.size())
   {
      if (i + 2 < s.size())
      {
         if (s[i] == 'o' && s[i + 1] == 'g' && s[i + 2] == 'o')
         {
            j = i + 3;
            bool ok = true;
            while (j < s.size() && ok)
            {
               if (j + 1 < s.size())
               {
                  if (s[j] == 'g' && s[j + 1] == 'o') j += 2;
                  else ok = false;
               }
               else (ok = false);
            }
            sol += "***";
            i = j;
         }
         else
         {
            sol += s[i];
            i++;
         }
      }
      else
      {
         sol += s[i];
         i++;
      }
   }
   cout << sol;
   return 0;
}