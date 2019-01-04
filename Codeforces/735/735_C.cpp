// https://codeforces.com/contest/735/problem/C
// https://codeforces.com/contest/735/submission/22543505

#include<iostream>

using namespace std;

int main() {

   unsigned long long F0, F1;
   unsigned long long n;
   cin >> n;


   F0 = 1;
   F1 = 2;

   unsigned long long aux, nr=0;
   while (n >= F1) {
      aux = F1;
      F1 = F1+F0;
      F0 = aux;
      nr++;
   }
   cout << nr;



}