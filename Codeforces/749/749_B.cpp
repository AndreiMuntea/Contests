// https://codeforces.com/contest/749/problem/B
// https://codeforces.com/contest/749/submission/23148975

#include <iostream>
using namespace std;

int main()
{
   int x1, y1, x2, y2, x3, y3;
   cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;

   cout << 3 << "\n";
   cout << x2 - x3 + x1 << " " << y2 - y3 + y1 << "\n";
   cout << x1 - x2 + x3 << " " << y1 - y2 + y3 << "\n";
   cout << x3 - x1 + x2 << " " << y3 - y1 + y2 << "\n";

   return 0;
}