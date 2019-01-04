// https://codeforces.com/contest/750/problem/A
// https://codeforces.com/contest/750/submission/23458514

#include <iostream>
using namespace std;


int main()
{
   int n, k, s = 240, i = 1, cnt = 0;
   
   cin >> n >> k;
   s -= k;
   while (s - i * 5 >= 0 && i <= n) cnt++, s -= i++ * 5;
   cout << cnt;
   return 0;
}