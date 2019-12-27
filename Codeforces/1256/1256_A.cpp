// https://codeforces.com/problemset/problem/1256/A
// https://codeforces.com/contest/1256/submission/67693035

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int queries;
    cin >> queries;

    while (queries--)
    {
        int a, b, n, s;
        cin >> a >> b >> n >> s;

        auto cat = (s / n);

        b = (b - s % n);

        cat -= min(cat, a);

        if (cat > 0)
        {
            b -= (cat * n);
        }

        (b < 0) ? cout << "NO\n" : cout << "YES\n";
    }

    return 0;
}