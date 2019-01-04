// https://codeforces.com/contest/9/problem/A
// https://codeforces.com/contest/9/submission/46892122

#include <iostream>
#include <algorithm>
using namespace std;

void Reduct(int& a, int& b)
{
    for (int i = 2; i <= 6; ++i)
    {
        while (a % i == 0 && b % i == 0)
        {
            a = a / i;
            b = b / i;
        }
    }
}


int main()
{
    int x, y, p, q;
    cin >> x >> y;

    p = (7 - max(x,y));
    q = 6;
    Reduct(p, q);

    cout << p << "/" << q;
    return 0;
}