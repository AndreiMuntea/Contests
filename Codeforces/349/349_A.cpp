// https://codeforces.com/contest/349/problem/A
// https://codeforces.com/contest/349/submission/14560893

#include <iostream>

using namespace std;

int main()
{
    int n,x,ok=0;
    int v[2];
    v[0]=v[1]=0;
    cin>>n;
    while (n>0)
    {
        cin>>x;
        if (x==25)
        {
            v[0]++;
        }
        else if (x==50)
        {
            v[0]--;
            v[1]++;
            if (v[0]<0){ok=1;}
        }
        else if (x==100)
        {
            if (v[1]>0)
            {
                v[1]--;
                if (v[0]<=0)
                {
                    ok = 1;
                }
                v[0]--;
            }
            else if (v[0]<3)
            {
                ok = 1;
            }
            else
            {
                v[0]-=3;
            }
        }
        n--;
    }
    if (ok==1){cout<<"NO";}
    else{cout<<"YES";}
}
