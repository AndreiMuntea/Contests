// https://codeforces.com/contest/832/problem/A
// https://codeforces.com/contest/832/submission/46924171

#include <iostream>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);

    unsigned long long n, k;
    cin >> n >> k;

    (n / k) & 1 ? cout << "YES" : cout << "NO";

    return 0;
}