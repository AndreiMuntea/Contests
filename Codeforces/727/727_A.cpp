// https://codeforces.com/contest/727/problem/A
// https://codeforces.com/contest/727/submission/21693330

#include <iostream>
using namespace std;

bool sols = false;
long long sol[100];

long long a, b;

void printSol(int k)
{
   cout << "YES\n" << k + 1 << "\n";
   cout << a << " ";
   for (int i = 0; i < k; ++i) cout << sol[i] << " ";
}

void rec(long long a, long long b, int k)
{
   if (a < b)
   {
      for (int i = 0; i < 2; i++)
      {
         if (i == 0) sol[k] = 2 * a;
         else sol[k] = 10 * a + 1;
         if (!sols)
            rec(sol[k], b, k + 1);
      }
      sol[k] = 0;
   }
   else if (a == b)
   {
      sols = true;
      printSol(k);
   }
}

int main()
{
   cin >> a >> b;
   rec(a, b, 0);
   if (!sols) puts("NO\n");

   return 0;
}