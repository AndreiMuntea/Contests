// https://www.spoj.com/problems/COINS/

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
 
unordered_map<int, ull> mp;

ull solve(int n)
{
   if (mp.find(n) != mp.end()) return mp[n];
   return mp[n] = solve(n / 2) + solve(n / 3) + solve(n / 4);
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

   mp[0] = 0;
   mp[1] = 1;
   for (int i = 2; i <= 100000; ++i) mp[i] = max(static_cast<ull>(i), mp[i / 2] + mp[i / 3] + mp[i / 4]);

   int n;
   while(cin>>n)
   {
      cout << solve(n) << "\n";
   }


   return 0;
}