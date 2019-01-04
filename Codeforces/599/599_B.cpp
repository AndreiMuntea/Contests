// https://codeforces.com/contest/599/problem/B
// https://codeforces.com/contest/599/submission/14385888

#include <iostream>

using namespace std;

int main()
{
    int a[100001],f[100001],b[100001],n,m;
    for (int i=1;i<=100001;i++)
    {
        a[i]=-1;
    }
    cin>>n>>m;
    for (int i=1;i<=n;i++)
    {
        cin>>f[i];
    }
    for (int i=1;i<=m;i++)
    {
        cin>>b[i];
    }
    for (int i=1;i<=n;i++)
    {
        if (a[f[i]]==-1)
        {
            a[f[i]]=i;
        }
        else
        {
            a[f[i]]=-999;
        }
    }
    bool okimp = true;
    bool okamb = true;
    for (int i=1;i<=m;i++)
    {
        if (a[b[i]]==-1)
        {
            okimp = false;
        }
        else
        {
            if (a[b[i]]==-999)
            {
                okamb = false;
            }
        }
    }

    if (!okimp){cout<<"Impossible";}
    else if (!okamb){cout<<"Ambiguity";}
    else
    {
        cout<<"Possible"<<"\n";
        for (int i=1;i<=m;i++)
        {
            cout<<a[b[i]]<<" ";
        }
    }

    return 0;
}
