// https://codeforces.com/contest/839/problem/A
// https://codeforces.com/contest/839/submission/46637035

#include <iostream>
#include <algorithm>
using namespace std;



int main()
{
    int n, k, x, t = 0, d = -1;
   
    cin >> n >> k;
    for (int i = 0; i < n; ++i)
    {
        cin >> x;
        k -= min(8, t + x);
        t = t + x - min(8, t + x);
        if (k <= 0)
        {
            d = i + 1;
            break;
        }
    }

    cout << d;

    return 0;
}