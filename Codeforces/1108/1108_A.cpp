// https://codeforces.com/problemset/problem/1108/A
// https://codeforces.com/contest/1108/submission/49355225
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

    int q, l1, r1, l2, r2;

    for (cin >> q; q > 0; --q)
    {
        cin >> l1 >> r1 >> l2 >> r2;
        
        if (l1 == r2) l1 = r1;
        cout << l1 << " " << r2 << "\n";
    }

    return 0;
}