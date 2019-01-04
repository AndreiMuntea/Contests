// https://codeforces.com/contest/617/problem/A
// https://codeforces.com/contest/617/submission/16293561

#include <stdio.h>
#include <stdlib.h>


int main()
{
    int n,contor,p;
    scanf("%d",&n);
    p = 5;
    contor = 0;
    while (p > 0 && n != 0)
    {
        contor += n/p;
        n -= p* (n/p);
        p--;
    }
    printf("%d",contor);
    return 0;
}
