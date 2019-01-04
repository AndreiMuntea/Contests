// https://codeforces.com/contest/460/problem/A
// https://codeforces.com/contest/460/submission/13875673

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,m,nr;
    scanf("%d",&n);
    scanf("%d",&m);
    nr = 0;
    while (n>0)
    {
        nr++;
        if (nr % m != 0){n--;}
    }
    printf("%d",nr);
    return 0;
}
