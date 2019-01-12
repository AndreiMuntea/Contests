// https://www.spoj.com/problems/ACODE/

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
   ios_base::sync_with_stdio(false) , cin.tie(nullptr) , cout.tie(nullptr);

   string s;
   cin >> s;
   ull best[5005];
   int m;

   while (s != "0")
   {
      m = s.length();
      best[m - 1] = best[m] = 1;

      s += '4';

      for (int i = m - 2; i >= 0; --i)
      {
         best[i] = best[i + 1];
         if (s[i] != '1' && s[i] != '2' && s[i+1] == '0')
         {
            best[0] = 0;
            break;
         }
         if (s[i] != '0' && s[i + 1] == '0') continue;
         if (s[i + 2] == '0') continue;
         if (s[i] == '1' || (s[i] == '2' && s[i + 1] <= '7')) best[i] += best[i + 2];
      }
      jmp:
      cout << best[0] << '\n';
      cin >> s;
   }


   return 0;
}
