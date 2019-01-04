// https://codeforces.com/contest/712/problem/B
// https://codeforces.com/contest/712/submission/21840726

#include <string>
#include <iostream>
using namespace std;

#define ABS(x) (((x) > (0)) ? (x) : (-x))


int main()
{
   string s;
   cin >> s;
   int y, x = y = 0;
   if (s.size() % 2 == 1)
   {
      puts("-1");
      return EXIT_SUCCESS;
   }
 
   for (size_t i = 0; i < s.size(); ++i)
   {
      if (s[i] == 'U') y++;
      else if (s[i] == 'D') y--;
      else if (s[i] == 'L') x--;
      else if (s[i] == 'R') x++;
   }

   cout << ABS( ABS(x) / 2 + ABS(y) / 2) + ABS(x) % 2;

   return EXIT_SUCCESS;
}