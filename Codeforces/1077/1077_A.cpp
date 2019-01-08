// https://codeforces.com/problemset/problem/1077/A
// https://codeforces.com/contest/1077/submission/48048633

#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int t;
    long long a, b, k;

    cin >> t;
    while (t--)
    {
        cin >> a >> b >> k;
        cout << ((k / 2) + (k % 2)) * a - (k / 2) * b << "\n";
    }

    return 0;
}