// https://codeforces.com/contest/785/problem/A
// https://codeforces.com/contest/785/submission/25504142

#include <iostream>
#include <string>
using namespace std;



int main()
{
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   int n;
   long long cnt = 0;
   string s;
   cin >> n;
   for(int i = 0; i < n; ++i)
   {
      cin >> s;
      if (s[0] == 'T') cnt += 4;
      else if (s[0] == 'C') cnt += 6;
      else if (s[0] == 'O') cnt += 8;
      else if (s[0] == 'D') cnt += 12;
      else if (s[0] == 'I') cnt += 20;
   }

   cout << cnt;

   return 0;
}