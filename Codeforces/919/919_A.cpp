// https://codeforces.com/problemset/problem/919/A
// https://codeforces.com/contest/919/submission/48049287
#include <iostream>
#include <iomanip>
#include <algorithm>
using namespace std;


int main()
{
    int n, m, a, b;
    double res = numeric_limits<double>::max();

    cin >> n >> m;
    while (n--)
    {
        cin >> a >> b;
        res = min(res, static_cast<double>(m * a) / static_cast<double>(b));
    }

    cout << setprecision(12) << fixed << res;

    return 0;
}