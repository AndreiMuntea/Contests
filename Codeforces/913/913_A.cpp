// https://codeforces.com/contest/913/problem/A
// https://codeforces.com/contest/913/submission/46626161

#include <iostream>
using namespace std;

int minpow()
{
    int i = 1;
    for(int j = 2; j <= 1e8; ++i, j = j<<1);
    return i;
}

int main()
{
    int n,m;
    cin>>n>>m;
    (n >= minpow()) ? cout << m
                    : cout << m % (1 << n);
    return 0;
}