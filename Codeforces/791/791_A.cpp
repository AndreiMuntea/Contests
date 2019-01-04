// https://codeforces.com/contest/791/problem/A
// https://codeforces.com/contest/791/submission/25610192

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
   int a, b;
   ll  k = 1, ans = 0, pw2 = 1, pw3 = 1;
   cin >> a >> b;
   while (!ans)
   {
      pw2 *= 2;
      pw3 *= 3;
      if (a * pw3 <= b * pw2) k++;
      else ans = k;
   }
   cout << ans;
   

   return 0;
}