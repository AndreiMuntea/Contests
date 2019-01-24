// https://codeforces.com/problemset/problem/1015/A
// https://codeforces.com/contest/1015/submission/48889387
#include <iostream>
#include <fstream>
#include <chrono>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <numeric>
#include <bitset>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cerr.tie(nullptr);
    int n, m, l, r;
    cin >> n >> m;

    set<int> s;
    for (int i = 1; i <= m; ++i)
    {
        s.insert(i);
    }


    for (int i = 1; i <= n; ++i)
    {
        cin >> l >> r;
        for (int k = l; k <= r; ++k) s.erase(k);
    }

    cout << s.size() << "\n";
    for (const auto& p : s) cout << p << " ";



    return 0;
}