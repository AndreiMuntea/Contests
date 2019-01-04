// https://codeforces.com/contest/725/problem/B
// https://codeforces.com/contest/725/submission/21679692

#include <string>
#include <iostream>
using namespace std;

int val(char dgt)
{
   if (dgt == 'f') return 1;
   if (dgt == 'e') return 2;
   if (dgt == 'd') return 3;
   if (dgt == 'a') return 4;
   if (dgt == 'b') return 5;
   if (dgt == 'c') return 6;
}

int main()
{
   string s;
   char c;
   int r;
   unsigned long long  num, cmp = 0;
   cin >> s;
   c = s[s.size() - 1];
   num = stoull(s.substr(0, s.size() - 1));
   
   r = num % 4;
   if (r == 0) num--;
   cmp = 16 * (num / 4);

   if (r == 1 || r == 3)
   {
      cmp += val(c);
   }
   else if (r == 2 || r == 0)
   {
      cmp += 7 + val(c);
   }

   cout << cmp;

   return 0;
}