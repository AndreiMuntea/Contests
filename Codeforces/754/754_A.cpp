// https://codeforces.com/contest/754/problem/A
// https://codeforces.com/contest/754/submission/24060119

#include <iostream>
#include <vector>
using namespace std;



int main() {

   int v[105], n;
   vector<pair<int, int>>res;

   cin >> n;
   for (int i = 1; i <= n; ++i) cin >> v[i];

   int zer = 1;
   int st = 1;

   while (v[zer] == 0) zer++;

   while (zer <= n)
   {
      int end = zer;
      for (int i = zer + 1; i <= n && v[i] == 0; end = i, ++i);
      res.push_back(make_pair(st, end));
      st = zer = ++end;
   }

   if (res.size() == 0) cout << "NO";
   else
   {
      cout << "YES\n" << res.size() << "\n";
      for (auto e : res) cout << e.first << " " <<e.second <<"\n";
   }

   return 0;
}