// https://codeforces.com/contest/894/problem/A
// https://codeforces.com/contest/894/submission/46639459

#include <iostream>
#include <string>
#include <vector>
using namespace std;


int Bsearch0(vector<int>& Vec, int X)
{
    int lo = 0;
    int hi = Vec.size() - 1;
    int m;
    int found = -1;

    while (lo <= hi)
    {
        m = (lo + hi) / 2;
        if (Vec[m] > X) hi = m - 1;
        else found = m, lo = m + 1;
    }

    return found;
}

int Bsearch1(vector<int>& Vec, int X)
{
    int lo = 0;
    int hi = Vec.size() - 1;
    int m;
    int found = -1;

    while (lo <= hi)
    {
        m = (lo + hi) / 2;
        if (Vec[m] <= X) lo = m + 1;
        else found = m, hi = m - 1;
    }

    return found == -1 ? 0 : Vec.size() - found;
}

int main()
{
    string s;
    vector<int> q;
    vector<int> a;
    int t = 0;

    cin >> s;
    for (size_t i = 0; i < s.size(); ++i)
    {
        if (s[i] == 'A') a.push_back(i);
        else if (s[i] == 'Q') q.push_back(i);
    }

    for (const auto& pa : a)
    {
        t = t + (Bsearch0(q, pa) + 1) * Bsearch1(q, pa);
    }
    cout << t;
    return 0;
}