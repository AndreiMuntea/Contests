// https://codeforces.com/contest/330/problem/A
// https://codeforces.com/contest/330/submission/14898824

#include <iostream>

using namespace std;


int main()
{
    int n,m;
    bool lin[11],col[11];
    for (int i = 1; i <= 10; i++)
    {
        lin[i] = true;
        col[i] = true;
    }
    cin>>n>>m;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= m; j++)
        {
            char x;
            cin>>x;
            if (x == 'S')
            {
                lin[i] = false;
                col[j] = false;
            }
        }
    }
    int nrcol = 0, nrlin = 0;
    for (int i = 1; i <= m; i++)
    {
        if (col[i]){nrcol++;}
    }
    for (int i = 1; i <= n; i++)
    {
        if (lin[i]){nrlin++;}
    }
    cout<<(nrcol*(n-nrlin) + (nrlin*m));
    return 0;

}
