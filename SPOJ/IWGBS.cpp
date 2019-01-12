// https://www.spoj.com/problems/IWGBS/

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

/*---------------------------*/

inline int digit(char c)
{
   return c - '0';
}

inline char chr(int d)
{
   return d + '0';
}

void add(string& a, string& b, string& res)
{
   int n = a.size();
   int m = b.size();
   int i = n - 1;
   int j = m - 1;
   int cap = 0;
   int ps;

   res = "";

   for (; i >= 0 && j >= 0; --i , --j)
   {
      ps = digit(a[i]) + digit(b[j]) + cap;
      res += chr(ps % 10);
      cap = ps / 10;
   }

   for (; i >= 0; --i)
   {
      ps = digit(a[i]) + cap;
      res += chr(ps % 10);
      cap = ps / 10;
   }

   for(; j >= 0; --j)
   {
      ps = digit(b[j]) + cap;
      res += chr(ps % 10);
      cap = ps / 10;
   }

   if (cap > 0) res += chr(cap);

   reverse(res.begin(), res.end());
   
}

int main()
{
   ios_base::sync_with_stdio(false) , cin.tie(nullptr) , cout.tie(nullptr);

   int n;
   cin >> n;
   
   string prevZeros = "1", prevOnes = "1", currentZeros = "1", currentOnes = "1";

   for (int i = n - 1; i > 0; --i)
   {
      currentZeros = prevOnes;
      add(prevZeros, prevOnes, currentOnes);
      
      prevOnes = currentOnes;
      prevZeros = currentZeros;
   }

   add(currentOnes, currentZeros, prevZeros);
   cout << prevZeros;

   return 0;
}
