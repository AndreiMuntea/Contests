// https://codeforces.com/contest/675/problem/D
// https://codeforces.com/contest/675/submission/47971947

#include <iostream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;


int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    map<int, int> kinder;
    set<int> bst;

    int n, x;
    cin >> n >> x;

    bst.insert(x);
    for (int i = 1; i < n; ++i)
    {
        cin >> x;

        auto smaller = --bst.lower_bound(x);
        int parent = 0;

        if (smaller != bst.end())
        {
            if (kinder[*smaller] != 0) smaller = bst.upper_bound(*smaller);
            parent = *smaller;
        }
        else
        {
            parent = *bst.upper_bound(x);
        }

        if (parent <= x) kinder[parent] = x;
        bst.insert(x);

        cout << parent << " ";
    }


    return 0;
}