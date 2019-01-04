// https://codeforces.com/contest/678/problem/B
// https://codeforces.com/contest/678/submission/21700809

#include <iostream>
using namespace std;

bool is_leap(int x)
{
   return (x % 400 == 0 || (x % 4 == 0 && x % 100 != 0));
}

int main()
{

   int x;
   bool leap;
   bool sol = false;
   bool leapY;

   cin >> x;
   leap = is_leap(x);
   
   int day = 0;

   while (!sol)
   {
      x++;
      leapY = is_leap(x);
      (leapY) ? day += 2 : day += 1;
      day %= 7;

      if (day == 0)
      {
         if (leapY == leap) sol = true;
      }
   }

   cout << x;

   return 0;
}