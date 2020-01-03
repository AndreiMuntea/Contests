// https://codeforces.com/contest/1206/problem/B
// https://codeforces.com/contest/1206/submission/67974231

#include <iostream>
using namespace std;


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr); cerr.tie(nullptr);

    long long negative = 0, positive = 0, zero = 0;
    long long n = 0, x = 0, cost = 0;

    cin >> n;
    while (n--)
    {
        cin >> x;
        if (x == 0) zero++;
        else if (x > 0)
        {
            cost += (x - 1);
            positive++;
        }
        else
        {
            cost += (-x - 1);
            negative++;
        }
    }

    if (negative % 2 == 1)
    {
        if (zero > 0)
        {
            zero--;
            cost++;
        }
        else
        {
            negative--;
            positive++;
            cost += 2;
        }
    }
    cost += zero;
    cout << cost;

    return 0;
}