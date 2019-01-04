// https://codeforces.com/contest/427/problem/A
// https://codeforces.com/contest/427/submission/14061277

#include <iostream>

using namespace std;

int main()
{
    int n,x,nrp=0,nrn=0;
    cin>>n;
    while (n>0)
    {
        cin>>x;
        if (x==-1 && nrp==0)
        {
            nrn++;
        }
        else if(x==-1 && nrp>0)
        {
            nrp--;
        }
        else if (x>=0)
        {
            nrp+=x;
        }
        n--;
    }
     cout<<nrn;
     return 0;
}
