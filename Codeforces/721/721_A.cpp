// https://codeforces.com/contest/721/problem/A
// https://codeforces.com/contest/721/submission/21808058

#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
   ios::sync_with_stdio(false);
   vector<int> sol;
   string s;
   int n;
   bool ok = true; 
   int ct = 0;

   cin >> n >> s;
   for (size_t i = 0; i < s.size(); ++i)
   {
      if (s[i] == 'B' && ok) ct++;
      else if (s[i] == 'B' && !ok) ok = true, ct = 1;
      else {
         if (ct > 0) sol.push_back(ct);
         ok = false; 
         ct = 0;
      }
   }

   if (ok > 0) sol.push_back(ct);

   cout << sol.size() << "\n";

   for (size_t i = 0; i < sol.size(); ++i)
   {
      cout << sol[i] << " ";
   }


   return EXIT_SUCCESS;
}