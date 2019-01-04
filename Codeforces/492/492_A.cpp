// https://codeforces.com/contest/492/problem/A
// https://codeforces.com/contest/492/submission/13875822

#include <stdio.h>
#include <stdlib.h>



int main()
{
    int n,s,i;
    scanf("%d",&n);
    s = 0;
    i = 0;
    while (s<=n)
    {
        i++;
        s = s+ ((1+i)*i)/2;
    }
    printf("%d",i-1);
    return 0;
}
