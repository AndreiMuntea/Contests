// https://codeforces.com/contest/580/problem/A
// https://codeforces.com/contest/580/submission/13753520

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,n,former,x,len,max_len;
    scanf("%d",&n);
    scanf("%d",&former);
    len = 1;
    max_len = 1;
    for (i=2;i<=n;i+=1)
    {
        scanf("%d",&x);
        if (x>=former)
        {
            len+=1;
        }
        else
        {
            if (len>max_len){max_len=len;}
            len = 1;
        }
        former = x;
    }
    if (len>max_len){max_len=len;}
    printf("%d",max_len);
    return 0;
}
