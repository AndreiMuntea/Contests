// https://codeforces.com/contest/777/problem/A
// https://codeforces.com/contest/777/submission/24967162

#include <iostream>
#include <vector>
using namespace std;



int main()
{
   ios::sync_with_stdio(false);
   
   int moves[6][3] = { {0, 1, 2}, {1, 0, 2}, {1, 2, 0}, {2, 1, 0}, {2, 0, 1}, {0, 2, 1} };

   long long n, pos;
   cin >> n >> pos;
   cout<<moves[n % 6][pos];



   return 0;
}