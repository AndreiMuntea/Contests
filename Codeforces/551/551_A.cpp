// https://codeforces.com/contest/551/problem/A
// https://codeforces.com/contest/551/submission/14410809

#include <iostream>

using namespace std;

int r[2001],e[2001],v[2001];

int main()
{
    int n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>e[i];
        v[e[i]]++;
    }
    r[2000]=0;
    for (int i=1999;i>=1;i--)
    {
        r[i] = v[i+1]+r[i+1];
    }
    for (int i=1;i<=n;i++)
    {
        cout<<r[e[i]]+1<<" ";
    }
    return 0;
}
