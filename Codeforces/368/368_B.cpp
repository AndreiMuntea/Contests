// https://codeforces.com/contest/368/problem/B
// https://codeforces.com/contest/368/submission/25721896

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
 
int n, m, ct;
unordered_map<int, bool> mp;
int pt[100005], dp[100005];

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

   cin >> n >> m;
   for (int i = 1; i <= n; ++i) cin >> pt[i];
   for(int i = n; i > 0; --i)
   {
      if (mp[pt[i]] != true) ct++;
      mp[pt[i]] = true;
      dp[i] = ct;
   }
   for(int x, i = 1; i<=m;++i )
   {
      cin >> x;
      cout << dp[x] << "\n";
   }

   return 0;
}