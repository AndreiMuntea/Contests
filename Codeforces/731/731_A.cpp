// https://codeforces.com/contest/731/problem/A
// https://codeforces.com/contest/731/submission/21480669

#include <iostream>
#include <string>
#include <algorithm>
using namespace std;



int main()
{

   string s;
   cin >> s;
   int sum, ma, mi;
   size_t size = s.size();
 

   sum = min(s[0] - 'a', 27 - (s[0] - 96));

   for (size_t i = 1; i < size; ++i)
   {
      if (s[i] > s[i - 1]) ma = s[i], mi = s[i - 1];
      else ma = s[i - 1], mi = s[i];
      sum += min(ma - mi, 26 - (ma - mi));
  }

   cout << sum;
   return EXIT_SUCCESS;
}