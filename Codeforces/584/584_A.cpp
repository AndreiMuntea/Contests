// https://codeforces.com/contest/584/problem/A
// https://codeforces.com/contest/584/submission/14045532

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,k;
    scanf("%d %d",&n,&k);
    if (k==10 && n==1){printf("-1");}
    else{
    if (k==10){printf("1");}
    else{printf("%d",k);}
    for (i=1;i<=n-1;i++)
    {
        printf("0");
    }
    }
    return 0;
}
