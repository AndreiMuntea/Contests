// https://codeforces.com/problemset/problem/999/A
// https://codeforces.com/contest/999/submission/49378361
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
    
    int n, k, cnt = 0, idx = 0;
    
    cin >> n >> k;
    vector<int> v(n);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    
    for (idx = 0; idx < n; ++idx)
    {
        if (v[idx] > k) break;
        ++cnt;
    }

    for (int i = n - 1; i > idx; --i)
    {
        if (v[i] > k) break;
        ++cnt;
    }

    cout << cnt;
    return 0;
}