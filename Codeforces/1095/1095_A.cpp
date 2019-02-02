// https://codeforces.com/problemset/problem/1095/A
// https://codeforces.com/contest/1095/submission/49361378
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
    
    int n;
    string s;
    cin >> n >> s;

    for (size_t i = 0, current = 1; i < s.size(); i += current++)
    {
        cout << s[i];
    }

    return 0;
}