// https://codeforces.com/contest/777/problem/D
// https://codeforces.com/contest/777/submission/24971940

#include <iostream>
#include <string>
#include <vector>
using namespace std;



int main()
{
   ios::sync_with_stdio(false);
   int n, j, sz1, sz2;
   string curr,s,prec;
   vector<string> v;
   vector<string> sol;

   cin >> n;
   
   for(auto i = 0; i < n; ++i)
   {
      cin >> s;
      v.push_back(s);
   }

   sol.push_back(v[n - 1]);
   for(auto i = n - 2; i>= 0; --i)
   {
      prec = sol.back();
      curr = v[i];
      sz1 = prec.size();
      sz2 = curr.size();
      for (j = 0; j < sz1 && j < sz2 && prec[j] == curr[j]; j++);
      if (j < sz1 && j < sz2 && prec[j] > curr[j]) j = sz2;
      sol.push_back(curr.substr(0, j));
   }

   for (auto i = n - 1; i >= 0; --i)cout << sol[i] << "\n";

   return 0;
}