// https://codeforces.com/contest/734/problem/B
// https://codeforces.com/contest/734/submission/22307571

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
   int k2, k3, k5, k6, m;
   cin >> k2 >> k3 >> k5 >> k6;
   m = min(k2, min(k5, k6));
   cout << m * 256 + min(k2 - m, k3) * 32;
   return 0;
}