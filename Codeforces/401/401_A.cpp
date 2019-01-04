// https://codeforces.com/contest/401/problem/A
// https://codeforces.com/contest/401/submission/14899014

#include <iostream>

using namespace std;

int main()
{
    int s = 0, n, x,p;
    cin>>n>>x;
    while (n>0)
    {
        cin>>p;
        s += p;
        n -- ;
    }
    if (s<0) s *= -1;
    if (s % x != 0) cout<< 1 + s/x;
    else cout << s/x;
    return 0;
}
