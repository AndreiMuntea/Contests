// https://codeforces.com/contest/721/problem/B
// https://codeforces.com/contest/721/submission/21808148

#include <iostream>
#include <vector>
#include <string>
using namespace std;


int main()
{
   ios::sync_with_stdio(false);

   vector<int> v(105, 0);
   string s;

   int n, k;
   cin >> n >> k;

   for (;n--;)
   {
      cin >> s;
      v[s.size()]++;
   }
   int sum = 0;
   int pp = 0;
   cin >> s;

   for (size_t i = 0; i < s.size(); ++i)
   {
      sum += v[i];
   }

   pp = (sum / k) * 5;
   cout << sum + pp + 1 << " ";
   sum += v[s.size()] - 1;
   pp = (sum / k) * 5;
   cout << sum + pp + 1;

   return EXIT_SUCCESS;
}

