// https://codeforces.com/contest/279/problem/B
// https://codeforces.com/contest/279/submission/46925339

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main()
{
    std::ios::sync_with_stdio(false); cin.tie(NULL);

    int n, t;
    cin >> n >> t;

    vector<int> v(n, 0);
    for (int i = 0; i < n; ++i) cin >> v[i];


    int p1 = 0, p2 = 0, s = 0, _max = 0;
    while (p1 < n && p2 < n)
    {
        if (p1 > p2) s += v[p2++];
        else if (s > t) s -= v[p1++];
        else
        {
            s += v[p2++];
            if (s <= t) _max = max(_max, p2 - p1);
        }
    }

    cout << _max;
    return 0;
}