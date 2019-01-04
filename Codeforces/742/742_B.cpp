// https://codeforces.com/contest/742/problem/B
// https://codeforces.com/contest/742/submission/22797691

#include <stdio.h>
#include <iostream>
#include <vector>
using namespace std;


int main()
{
   vector<int> frecv(200005, 0);
   int n, k, x;
   long long cnt = 0;
   scanf("%d %d", &n, &k);

   while (n--)
   {
      scanf("%d", &x);
      cnt += frecv[x^k];
      frecv[x]++;
   }

   cout << cnt;

   return 0;
}