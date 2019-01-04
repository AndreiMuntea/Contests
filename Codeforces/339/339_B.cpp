// https://codeforces.com/contest/339/problem/B
// https://codeforces.com/contest/339/submission/14410462

#include <iostream>

using namespace std;

int main()
{
    long long x,pozcur=1,n,m,grande=0;
    cin>>n>>m;
    while (m>0)
    {
        cin>>x;
        if (x>pozcur)
        {
            grande += x - pozcur ;
        }
        else if (x<pozcur)
        {
            grande += n - pozcur + x;
        }
        pozcur = x;
        m--;
    }
    cout<<grande;
    return 0;


}
