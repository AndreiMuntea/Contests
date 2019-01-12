// https://www.spoj.com/problems/FARIDA/

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

ull sol[10009], ptc[10009];

int main()
{
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);

   int n, t;
   cin >> t;
   for(int j = 1; j<=t; ++j){
      cin >> n;
      for (int i = 1; i <= n; ++i)cin >> ptc[i];
      sol[1] = ptc[1];
      for (int i = 2; i <= n; ++i) sol[i] = max(sol[i - 2] + ptc[i], sol[i - 1]);
      cout <<"Case "<< j<<": "<< sol[n]<<"\n";
   }

   return 0;
}