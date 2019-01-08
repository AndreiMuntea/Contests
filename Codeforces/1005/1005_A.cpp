// https://codeforces.com/problemset/problem/1005/A
// https://codeforces.com/contest/1005/submission/48101104

#include <vector>
#include <iostream>
using namespace std;


int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    vector<int> res; 
    int n, x, curr = 1;

    cin >> n >> x;
    for (int i = 2; i <= n; ++i)
    {
        cin >> x;
        if (x == 1)
        {
            res.push_back(curr);
            curr = 0;
        }
        ++curr;
    }
    res.push_back(curr);

    cout << res.size() << "\n";
    for (auto& c : res) cout << c << " ";

    return 0;
}