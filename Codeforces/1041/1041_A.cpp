// https://codeforces.com/contest/1041/problem/A
// https://codeforces.com/contest/1041/submission/47156860

#include <vector>
#include <algorithm>
#include <iostream>
using namespace std;



int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    int n, nr = 0;
    cin >> n;
    vector<int> v(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }

    sort(v.begin(), v.end());
    for (int i = 1; i < n; ++i) nr += (v[i] - v[i - 1] - 1);

    cout << nr;
    return 0;
}