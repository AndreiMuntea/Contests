// https://codeforces.com/contest/327/problem/A
// https://codeforces.com/contest/327/submission/15059968

#include <iostream>

using namespace std;

int v[101];

int main()
{
    int n,no1=0,max,fin;
    cin>>n;
    for (int i = 1; i<=n;i++)
    {
        cin>>v[i];
        if (v[i] == 1) no1++;
    }
    fin = 0;
    for (int i = 1; i<=n; i++)
    {
        max = no1;
        for (int j = i; j<=n;j++ )
        {
            if (v[j] == 1) max--;
            else max++;
            if (max>fin) fin = max;
        }
    }
    cout<<fin;
    return 0;
}
