// https://codeforces.com/contest/520/problem/A
// https://codeforces.com/contest/520/submission/13876957

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int v[30],n,i,cord;
   char c;
   scanf("%d\n",&n);
   for (i=1;i<=n;i++)
   {
       scanf("%c",&c);
       cord = c;
       if (cord<97)
       {
           v[cord-65]=1;
       }
       else
       {
           v[cord-97]=1;
       }
   }
   cord = 1;
   for (i=0;i<=25;i++)
   {
       if (v[i]!=1)
       {
           cord = -1;
       }
   }
   if (cord == -1 ){printf("NO");}
   else {printf("YES");}
   return 0;
}
