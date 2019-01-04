// https://codeforces.com/contest/742/problem/A
// https://codeforces.com/contest/742/submission/22766765

#include <iostream>
using namespace std;

int main()
{
   int n, r;
   cin >> n;
   r = n % 4;
   if (n == 0) puts("1");
   else if (r == 1) puts("8");
   else if (r == 2) puts("4");
   else if (r == 3) puts("2");
   else if (r == 0) puts("6");

   return 0;
}