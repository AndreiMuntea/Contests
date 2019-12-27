// https://codeforces.com/problemset/problem/761/A
// https://codeforces.com/contest/761/submission/49365359
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
    int n, m;
    
    cin >> n >> m;

    (abs(n - m) >= 2 || (n == 0 && m == 0)) ? cout << "NO\n"
                                            : cout << "YES\n";
    
    return 0;
}