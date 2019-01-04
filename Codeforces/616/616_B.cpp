// https://codeforces.com/contest/616/problem/B
// https://codeforces.com/contest/616/submission/15329996

#include <iostream>

using namespace std;

int main()
{
    short int n,m;
    long long int max = 0;
    cin >> n >> m;
    for (int i = 1; i <= n; i++)
    {
        long long min = 0x3B9ACA00, x;
        for (int j = 1; j <= m; j++)
        {
            cin >> x;
            if (x < min) min = x;
        }
        if (min > max) max = min;
    }
    cout << max;
    return 0;
}
