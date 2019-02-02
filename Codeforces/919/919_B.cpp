// https://codeforces.com/problemset/problem/919/B
// https://codeforces.com/contest/919/submission/49355568
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

vector<long long> Compute()
{
    long long current = 19;
    vector<long long> result;

    while (result.size() < 10000)
    {
        int sum = 0;
        for (auto c = current; c > 0; c = c / 10) sum += (c % 10);

        if (sum == 10) result.push_back(current);
        current++;
    }

    return result;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cerr.tie(nullptr);

    auto all = Compute();

    int k;
    cin >> k;

    cout << all[k - 1];

    return 0;
}