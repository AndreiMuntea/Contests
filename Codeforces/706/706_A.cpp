// https://codeforces.com/contest/706/problem/A
// https://codeforces.com/contest/706/submission/22852236

#define _CRT_SECURE_NO_WARNINGS


#include <iostream>
#include <algorithm>
#include <stdio.h>
#include <limits>
#include <cmath>
using namespace std;


inline double distance(int ax, int ay, int bx, int by)
{
   return sqrt((ax - bx) * (ax - bx) + (ay - by) * (ay - by));
}


int main()
{
   int vx, vy, n, bx, by, vb;
   double mx = numeric_limits<double>::max();
   double time;

   scanf("%d %d %d", &vx, &vy, &n);
   while (n--)
   {
      scanf("%d %d %d", &bx, &by, &vb);
      time = (distance(vx, vy, bx, by)) / vb;
      if (mx > time) mx = time;
   }

   printf("%.10lf\n", mx);
   return 0;
}