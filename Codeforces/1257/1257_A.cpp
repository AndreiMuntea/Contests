// https://codeforces.com/contest/1257/problem/A
// https://codeforces.com/contest/1257/submission/67974889

#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr); cerr.tie(nullptr);

    int n, x, a, b, t;
    cin >> t;

    while (t--)
    {
        cin >> n >> x >> a >> b;
        if (b < a) swap(a, b);

        if (b < n)
        {
            auto prevB = b;
            b = min(b + x, n);
            x -= (b - prevB);
        }
        if (a > 1)
        {
            a = max(1, a - x);
        }

        cout << b - a << "\n";
    }

    return 0;
}