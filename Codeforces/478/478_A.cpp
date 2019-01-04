// https://codeforces.com/contest/478/problem/A
// https://codeforces.com/contest/478/submission/13753654

#include <stdio.h>
#include <stdlib.h>

int main()
{
   int x,i,sum = 0;
   for (i=1;i<=5;i+=1)
   {
       scanf("%d",&x);
       sum +=x;
   }
   if ((sum%5!=0) || (sum==0)){printf("-1");}
   else{printf("%d",sum/5);}
   return 0;
}
