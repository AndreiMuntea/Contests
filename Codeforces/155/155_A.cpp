// https://codeforces.com/contest/155/problem/A
// https://codeforces.com/contest/155/submission/13958025

#include <iostream>
using namespace std;

int main()
{
    int x,n,mins,maxs,nr;
    cin>>n;
    cin>>mins;
    maxs=mins;
    nr=0;
    while (n-1>0)
    {
        cin>>x;
        if (x<mins)
        {
            nr++;
            mins=x;
        }
        if (x>maxs)
        {
            nr++;
            maxs=x;
        }
        n--;
    }
    cout<<nr;
    return 0;
}
