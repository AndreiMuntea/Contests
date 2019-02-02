// https://codeforces.com/problemset/problem/996/A
// https://codeforces.com/contest/996/submission/49053280
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
    
    int n, r = 0;
    vector<int> v = { 100, 20, 10, 5,1 };
    cin >> n;

    for (size_t i = 0; i < v.size(); ++i)
    {
        r += (n / v[i]);
        n = n % v[i];
    }

    cout << r;

    return 0;
}