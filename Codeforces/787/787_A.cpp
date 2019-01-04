// https://codeforces.com/contest/787/problem/A
// https://codeforces.com/contest/787/submission/25738084

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

   int a, b, c, d;
   cin >> a >> b >> c >> d;
   unordered_map<int, int> mp;
   int ans = -1;

   for(int i = 0; i<= 50000; ++i)
   {
      mp[b + a * i] = 1;
   }

   for(int i = 0; i<=50000; ++i)
   {
      if(mp.find(d + i * c) != mp.end())
      {
         ans = d + i * c;
         break;

      }
   }


   cout << ans;
   return 0;
}