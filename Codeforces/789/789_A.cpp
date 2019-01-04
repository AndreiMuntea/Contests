// https://codeforces.com/contest/789/problem/A
// https://codeforces.com/contest/789/submission/25902327

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
#include <map>
#include <unordered_map>
#include <set>
#include <vector>
#include <cstdio>
#include <string>
using namespace std;

#define ll long long 
#define ull unsigned long long

/*------------------------------------------------------------------*/
 
int v[100005];
int n, k;

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   cin >> n >> k;
   int cnt = 0;
   int buzunare;

   for (int i = 1; i <= n; ++i) cin >> v[i];

   for(int i = 1; i<=n; ++i)
   {
      if (v[i] == 0) continue;
      if (v[i] >= k)
      {
         buzunare = v[i] / k;
         if (v[i] % k != 0) buzunare++;
      }
      else
      {
         buzunare = 1;
      }
      cnt += buzunare / 2;
      if (buzunare % 2 != 0) {
         cnt++;
         v[i + 1] = max(0, v[i + 1] - k);
      }
   }
   cout << cnt;
   

   return 0;
}