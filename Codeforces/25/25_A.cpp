// https://codeforces.com/contest/25/problem/A
// https://codeforces.com/contest/25/submission/14048259

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,i=1,nrpar=0,nrimpar=0,n,indexpar=0,indeximpar=0;
   scanf("%d",&n);
   while (n>0)
   {
       scanf("%d",&x);
       if (x%2==0)
       {
           nrpar++;
           indexpar=i;
       }
       else
       {
           nrimpar++;
           indeximpar=i;
       }
       i++;
       n--;
   }
   if (nrimpar>nrpar)
   {
       printf("%d",indexpar);
   }
   else
   {
       printf("%d",indeximpar);
   }
   return 0;
}
