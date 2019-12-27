// https://codeforces.com/problemset/problem/1017/A
// https://codeforces.com/problemset/submission/1017/49365147
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
    int a, b, c, d, thomas, n, rank = 1;

    cin >> n >> a >> b >> c >> d;
    thomas = a + b + c + d;

    for (int i = 1; i < n; ++i)
    {
        cin >> a >> b >> c >> d;
        if (a + b + c + d > thomas) rank++;
    }
    cout << rank;

    return 0;
}