// https://codeforces.com/contest/689/problem/A
// https://codeforces.com/contest/689/submission/22211157

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <map>
#include <vector>
#include <string>
#include <iostream>
using namespace std;



int main()
{
   int a[6][5] = { {-1,-1,-1,-1,-1},{-1,1,2,3,-1},{-1,4,5,6,-1},{-1,7,8,9,-1 },{-1,-1,0,-1,-1},{-1,-1,-1,-1,-1} };
   pair<int, int> poz[10];
   poz[0] = make_pair(4, 2);
   poz[7] = make_pair(3, 1);
   poz[8] = make_pair(3, 2);
   poz[9] = make_pair(3, 3);
   poz[4] = make_pair(2, 1);
   poz[5] = make_pair(2, 2);
   poz[6] = make_pair(2, 3);
   poz[1] = make_pair(1, 1);
   poz[2] = make_pair(1, 2);
   poz[3] = make_pair(1, 3);

   vector<int> v;
   int n;
   cin >> n;
   char el;
   int mx[] = { -1,0,1 };
   int my[] = { -1,0,1 };
   for (int i = 0; i < n; i++) {
      cin >> el;
      v.push_back((int)(el - '0'));
   }

   bool sePoate = false;
   for (int i = 0; i <= 2; i++) {
      for (int j = 0; j <= 2; j++) 
      if(i!=1 || j!=1)
      {
         sePoate = true;
         for (auto el : v) {
            auto p = poz[el];
            if (a[p.first + mx[i]][p.second + my[j]] == -1)
               sePoate = false;
         }
         if (sePoate) {
            cout << "NO";
            return 0;
         }
      }
   }
   cout << "YES";
   return 0;
};
   