// https://codeforces.com/contest/1118/problem/A
// https://codeforces.com/contest/1118/submission/67975573
#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr); cerr.tie(nullptr);

    unsigned long long queries, n, a, b;
    cin >> queries;

    while (queries--)
    {
        unsigned long long cost = 0;

        cin >> n >> a >> b;
        b = min(a + a, b);

        cost = (n % 2) * a + (n / 2) * b;
        cout << cost << "\n";
    }

    return 0;
}