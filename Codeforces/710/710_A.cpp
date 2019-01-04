// https://codeforces.com/contest/710/problem/A
// https://codeforces.com/contest/710/submission/20566928

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char c = getchar(), r = getchar();

    int rez = 0;

    if (c == 'a' || c == 'h')
    {
        if (r == '1' || r == '8')
        {
           rez = 3;
        }
        else rez = 5;
    }
    else
    {
        if (r == '1' || r == '8')
        {
            rez = 5;
        }
        else rez = 8;
    }

    printf("%d\n",rez);

    return EXIT_SUCCESS;
}
