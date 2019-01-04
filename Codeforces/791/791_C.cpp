// https://codeforces.com/contest/791/problem/C
// https://codeforces.com/contest/791/submission/25626271

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
int n, k, idx;
int nou[60];

string t = "Aa";

string next(int idx)
{
   if (t[t.size() - 1] != 'z')t[t.size() - 1]++;
   else t += 'a';
   return t;
}

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   int amAjuns = 1;
   string s, last = next(idx);
   cin >> n >> k;
   vector<string> sol;

   for(int i = 1; i<=n-k+1;++i)
   {
      cin >> s;
      if (s == "YES")
      {
         for (int j = max(i, amAjuns); j <= i + k - 1; ++j)sol.push_back(next(++idx));
         amAjuns = i + k;
      }
      else
      {
         if (i == 1) sol.push_back(next(idx)), amAjuns++;
         sol.push_back(sol[i - 1]);
         amAjuns++;
      }
   }
   while (amAjuns++ <= n) sol.push_back(next(++idx));

   for (string s : sol)cout << s<<" ";
   

   return 0;
}