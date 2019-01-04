// https://codeforces.com/contest/455/problem/A
// https://codeforces.com/contest/455/submission/15059708

#include <iostream>

using namespace std;

long long v[100001];

int main()
{
    int x,n;
    cin>>n;
    for (int i=1;i<=n;i++)
    {
        cin>>x;
        v[x]+=x;
    }
    v[0] = 0;
    for (int i = 2; i<= 100000;i++)
    {
            v[i] = max(v[i-2]+v[i],v[i-1]);
    }
    cout<<v[100000];
    return 0;
}
