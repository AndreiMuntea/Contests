// https://codeforces.com/contest/592/problem/A
// https://codeforces.com/contest/592/submission/13993887

#include <iostream>
using namespace std;

char s[10][10];
int minb=9,minw=9,p;

int calc_min(int el, int i, int j)
{
    int m=9;
    if (el=='B')
    {
        for(int k=i+1;k<=8;k++)
        {
            if (s[k][j]!='.'){return m;}
        }
        return 8-i;
    }
    else
    {
        for(int k=i-1;k>=1;k--)
        {
            if (s[k][j]!='.'){return m;}
        }
        return i-1;
    }
}

int main()
{
    for (int i=1;i<=8;i++)
    {
        for (int j=1;j<=8;j++)
        {
            cin>>s[i][j];
        }
    }
    for (int i=1;i<=8;i++)
    {
        for (int j=1;j<=8;j++)
        {
            if (s[i][j]!='.'){p=calc_min(s[i][j],i,j);}
            if ((s[i][j]=='B')&&(p<minb))
            {
                minb=p;
            }
            if ((s[i][j]=='W')&&(p<minw))
            {
                minw=p;
            }
        }
    }
    if (minb<minw){cout<<'B';}
    else{cout<<'A';}
    return 0;
}
