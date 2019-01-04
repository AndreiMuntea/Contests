// https://codeforces.com/contest/787/problem/B
// https://codeforces.com/contest/787/submission/25740045

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

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

   int n, m, mx, x;
   unordered_map<int, int> mp;
   bool ok = true;

   cin >> n >> m;

   for(int i = 1;i <=m && ok; ++i)
   {
      mp.clear();
      ok = false;
      cin >> mx;
      for(int j = 1; j<=mx;++j)
      {
         cin >> x;
         mp[x] = 1;
         if (mp.find(-x) != mp.end()) ok = true;
      }
   }

   (!ok) ? puts("YES") : puts("NO");


   return 0;
}