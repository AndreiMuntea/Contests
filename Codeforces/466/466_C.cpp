// https://codeforces.com/contest/466/problem/C
// https://codeforces.com/contest/466/submission/47156701

#include <iostream>
#include <vector>
using namespace std;


int main()
{
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n = 0;
    long long s = 0, s_23 = 0, s_13 = 0;
    unsigned long long n1 = 0, n2 = 0, nr = 0;

    cin >> n;
    vector<long long> v(n + 1, 0);
    for (int i = 1; i <= n; ++i)
    {
        cin >> v[i];
        v[i] += v[i - 1];
    }

    s = v[n]; 
    s_13 = v[n] / 3; 
    s_23 = 2 * s_13;
    
    if (s % 3 != 0)
    {
        cout << 0;
        return 0;
    }

    for (int i = 1; i < n; ++i)
    {
        if (v[i] == s_23)
        {
            n2++;
            nr = nr + n1;
        }
        if (v[i] == s_13)
        {
            n1++;
        }
    }

    cout << nr;

    return 0;
}