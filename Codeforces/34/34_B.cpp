// https://codeforces.com/contest/34/problem/B
// https://codeforces.com/contest/34/submission/46923810

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;


int main()
{
    std::ios::sync_with_stdio(false); cin.tie(NULL);
    int n, m, _max = 0;
    cin >> n >> m;
    
    vector<int> v(n, 0);
    for (int i = 0; i < n; ++i) cin >> v[i];

    sort(v.begin(), v.end());
    for (int i = 0; i < m; ++i) _max = max(_max, _max - v[i]);

    cout << _max;
    return 0;
}