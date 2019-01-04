// https://codeforces.com/contest/509/problem/A
// https://codeforces.com/contest/509/submission/14045227

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[10][10],maxs,i,j,n;
    scanf("%d",&n);
    maxs=1;
    for (i=0;i<n;i++)
    {
        for (j=0;j<n;j++)
        {
            if (j==0 || i==0)
            {
                a[i][j]=1;
            }
            else
            {
                a[i][j]=a[i-1][j]+a[i][j-1];
            }
            if (a[i][j]>maxs)
            {
                maxs=a[i][j];
            }
        }
    }
    printf("%d",maxs);
    return 0;
}
