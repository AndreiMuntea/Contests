// https://codeforces.com/contest/1091/problem/A
// https://codeforces.com/contest/1091/submission/48048474

#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    int y, b, r;
    
    cin >> y >> b >> r;

    b = min(r - 1, b);
    y = min(b - 1, y);
    cout << 3 * y + 3;

    return 0;
}