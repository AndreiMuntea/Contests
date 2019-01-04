// https://codeforces.com/contest/712/problem/A
// https://codeforces.com/contest/712/submission/21814728

#include <stdio.h>
using namespace std;


int main()
{
   
   int ai, bi, n;
   scanf("%d %d", &n, &ai);

   for (; n > 1; n--)
   {
      scanf("%d", &bi);
      printf("%d ", ai + bi);
      ai = bi;
   }
   printf("%d\n", ai);
   return 0;
}
#include <iostream>
using namespace std;


int main()
{
   ios::sync_with_stdio(false);
   
   int ai, bi, n;
   cin >> n;
   cin >> ai;

   for (; n > 1; n--)
   {
      cin >> bi;
      cout << ai + bi << ' ';
      ai = bi;
   }
   cout << ai << '\n';

   return EXIT_SUCCESS;
}