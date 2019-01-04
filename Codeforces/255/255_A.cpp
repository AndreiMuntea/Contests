// https://codeforces.com/contest/255/problem/A
// https://codeforces.com/contest/255/submission/16294406

#include <stdio.h>
#include <stdlib.h>
struct muscles
{
    char* name;
    int value;
};



int main()
{
    struct muscles muscle[3];
    int i,n,x,j;
    muscle[0].name = "chest";
    muscle[0].value = 0;
    muscle[1].name = "biceps";
    muscle[1].value = 0;
    muscle[2].name = "back";
    muscle[2].value = 0;
    scanf("%d",&n);
    for (i = 1; i <=n; i++)
    {
        scanf("%d",&x);
        if (i % 3 == 0) muscle[2].value += x;
        else if (i % 3 == 2) muscle[1].value += x;
        else muscle[0].value += x;
    }
    for (i = 0; i < 3; i++)
    {
        for (j = i + 1; j < 3; j++)
        {
            if (muscle[i].value < muscle[j].value)
            {
                struct muscles aux;
                aux = muscle[i];
                muscle[i] = muscle[j];
                muscle[j] = aux;
            }
        }
    }
    printf("%s",muscle[0].name);
    return 0;

}
