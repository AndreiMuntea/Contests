// https://www.spoj.com/problems/ADDREV/

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
   ios_base::sync_with_stdio(false), cin.tie(nullptr), cout.tie(nullptr);
   string a, b;
   int n1, n2, n;

   cin >> n;
   while (n-- )
   {
	   cin >> a >> b;
	   reverse(a.begin(), a.end());
	   reverse(b.begin(), b.end());
	   n1 = stoi(a);
	   n2 = stoi(b);
	   a = to_string(n1 + n2);
	   reverse(a.begin(), a.end());
	   a.erase(0, a.find_first_not_of('0'));
	   cout << a << "\n";
   }


   return 0;
}