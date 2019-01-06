// https://codeforces.com/contest/217/problem/A
// https://codeforces.com/contest/217/submission/48030693

#include <iostream>
#include <algorithm>
#include <map>
#include <vector>
#include <set>
using namespace std;


int find(map<int, int>& parent, int x)
{
    if (x == parent[x]) return x;
    return parent[x] = find(parent, parent[x]);
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int n, x, y;
    map<int, int> uniX;
    map<int, int> east;

    set<int> newDrifts;
    
    cin >> n;

    for (int i = 1; i <= n; ++i)
    {
        cin >> x >> y;

        if (uniX[x] == 0) uniX[x] = x;
        if (east[y] == 0) east[y] = x;
        
        auto px = find(uniX, x);
        auto py = find(uniX, east[y]);

        uniX[py] = px;
        east[y] = px;
    }

    for (auto& keyValuePair : uniX)
    {
        newDrifts.insert(find(uniX, keyValuePair.first));
    }


    cout << newDrifts.size() - 1;

    return 0;
}