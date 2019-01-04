// https://codeforces.com/contest/735/problem/D
// https://codeforces.com/contest/735/submission/22544920

#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

bool is_prime(long long n)
{
   double x = sqrt(n);
   long long k = (long long)x + 1;
   for (long long i = 2; i < k; ++i)
   {
      if (n % i == 0) return false;
   }
   return true;
}


int main()
{

   long long n;
   cin >> n;
   if (is_prime(n)) puts("1");
   else if (n & 1) {
      if (is_prime(n - 2)) puts("2");
      else puts("3");
   }
   else puts("2");

   return 0;
}