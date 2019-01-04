// https://codeforces.com/contest/789/problem/B
// https://codeforces.com/contest/789/submission/25930709

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
 
unordered_map < long long , bool > in;
long long b1, q, l, m, x;

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   cin >> b1 >> q >> l >> m;
   for(int i = 1; i<=m; ++i)
   {
      cin >> x;
      in[x] = true;
   }

   long long  cnt = 0;
   long long last = b1;

   while (b1 != 0 && abs(b1) <= l)
   {
      if (in.find(b1) == in.end()) cnt++;
      b1 *= q;
      if (abs(b1) == last || b1 == last) break;
      last = b1;
   } 

   if(b1 == 0 )
   {
      if (in.find(b1) == in.end()) cnt = -1;
   }
   else if ( (abs(b1) == last || b1 == last) && abs(b1) <= l)
   {
      if (in.find(b1) == in.end()) cnt = -1;
      if (q == -1)
      {
         if (in.find(b1) == in.end() || in.find(-b1) == in.end()) cnt = -1;
      }
   }

   if (cnt == -1)cout << "inf\n";
   else cout << cnt;

   return 0;
}