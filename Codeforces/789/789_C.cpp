// https://codeforces.com/contest/789/problem/C
// https://codeforces.com/contest/789/submission/25930865

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


int n;
long long v[100004];
vector<long long> pare, impare;

long long sum(vector<long long>& vc)
{
   long long sumMax = 0;
   long long sumCur = 0;
   long long c = 0;

   for(size_t i = 0; i < vc.size(); ++i)
   {
      sumCur += vc[i];
      sumMax = max(sumMax, sumCur);
      sumCur = max(c, sumCur);
   }

   return sumMax;
}

int main()
{
   ios_base::sync_with_stdio(false) , cin.tie(nullptr) , cout.tie(nullptr);
   cin >> n;
   for (int i = 1; i <= n; ++i) cin >> v[i];

   for(int i = 1; i<=n-1; ++i)
   {
      if (i & 1) impare.push_back(abs(v[i] - v[i + 1]));
      else impare.push_back(-abs(v[i] - v[i + 1]));
   }

   for(int i = 2; i<=n-1; ++i)
   {
      if (i & 1) pare.push_back(-abs(v[i] - v[i + 1]));
      else pare.push_back(abs(v[i] - v[i + 1]));
   } 

   cout << max(sum(pare), sum(impare));

   return 0;
}
