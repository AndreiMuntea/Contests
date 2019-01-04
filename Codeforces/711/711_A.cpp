// https://codeforces.com/contest/711/problem/A
// https://codeforces.com/contest/711/submission/20556856

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char rows[1001][6];
    int n;
    bool ok = false;

    scanf("%d",&n);


    int i;
    for(i = 0; i < n; i++)
    {
        scanf("%s",&rows[i]);
        if (!ok)
        {
            if (rows[i][0] == 'O' && rows[i][1] == 'O')
            {
                ok = true;
                rows[i][0] = '+';
                rows[i][1] = '+';
            }
            else if (rows[i][3] == 'O' && rows[i][4] == 'O')
            {
                ok = true;
                rows[i][3] = '+';
                rows[i][4] = '+';
            }
        }
    }
    if (!ok)
    {
        printf("NO");
    }
    else
    {
        printf("YES\n");
        for (i = 0; i < n; i++)
        {
            printf("%s\n", rows[i]);
        }
    }

    return 0;
}
