// https://codeforces.com/contest/766/problem/D
// https://codeforces.com/contest/766/submission/47708811

#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;

int find(int x, vector<int>& parent)
{
    if (x == parent[x]) return x;
    return parent[x] = find(parent[x], parent);
}

void uni(int x, int y, vector<int>& parent)
{
    parent[min(x, y)] = max(x, y);
}

bool make_sin(int x, int y, vector<int>& sinonime, vector<int>& antonime)
{
    auto sinX = find(x, sinonime); auto antX = find(antonime[sinX], sinonime);
    auto sinY = find(y, sinonime); auto antY = find(antonime[sinY], sinonime);

    if (sinX == antY || sinY == antX) return false;
    
    uni(sinX, sinY, sinonime);
    if (antX != 0 && antY != 0) uni(antX, antY, sinonime);

    antonime[max(sinX, sinY)] = max(antX, antY);

    return true;
}

bool make_ant(int x, int y, vector<int>& sinonime, vector<int>& antonime)
{
    auto sinX = find(x, sinonime); auto antX = find(antonime[sinX], sinonime);
    auto sinY = find(y, sinonime); auto antY = find(antonime[sinY], sinonime);

    if (sinX == sinY || (antX == antY && antX != 0)) return false;

    if (antY != 0) sinonime[antY] = sinX;  
    if (antX != 0) sinonime[antX] = sinY;
    
    antonime[sinX] = sinY;
    antonime[sinY] = sinX;

    return true;
}

bool make_rel(int r, int x, int y, vector<int>& sinonime, vector<int>& antonime)
{
    return (r == 1) ? make_sin(x, y, sinonime, antonime) : make_ant(x, y, sinonime, antonime);
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, m, q, r;
    string x, y;

    cin >> n >> m >> q;

    map<string, int> hash;
    vector<int> sinonime(n + 1, 0);
    vector<int> antonime(n + 1, 0);

    for (int i = 1; i <= n; ++i)
    {
        sinonime[i] = i;

        cin >> x;
        hash[x] = i;
    }

    for (int i = 1; i <= m; ++i)
    {
        cin >> r >> x >> y;
        (make_rel(r, hash[x], hash[y], sinonime, antonime)) ? cout << "YES\n" : cout << "NO\n";
    }

    for (int i = 1; i <= q; ++i)
    {
        cin >> x >> y;
        auto px = hash[x];      
        auto py = hash[y]; 
        auto ay = antonime[find(py, sinonime)];

        if (find(px, sinonime) == find(py, sinonime)) cout << "1\n";
        else if (find(px, sinonime) == find(ay, sinonime)) cout << "2\n";
        else cout << "3\n";
    }


    return 0;
}
#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
using namespace std;

int find(int x, vector<int>& parent)
{
    if (x == parent[x]) return x;
    return parent[x] = find(parent[x], parent);
}

bool make_sin(int x, int y, vector<int>& sinonime, vector<int>& antonime)
{
    auto sinX = find(x, sinonime); auto antX = find(antonime[sinX], sinonime);
    auto sinY = find(y, sinonime); auto antY = find(antonime[sinY], sinonime);

    if (sinX == antY || sinY == antX) return false;
 
    sinonime[sinY] = sinX;
    antonime[sinX] = max(antX, antY);
    if (antX != 0 && antY != 0) sinonime[min(antX, antY)] = max(antX, antY);    
    
    return true;
}

bool make_ant(int x, int y, vector<int>& sinonime, vector<int>& antonime)
{
    auto sinX = find(x, sinonime); auto antX = find(antonime[sinX], sinonime);
    auto sinY = find(y, sinonime); auto antY = find(antonime[sinY], sinonime);

    if (sinX == sinY || (antX == antY && antX != 0)) return false;

    if (antY != 0) sinonime[antY] = sinX;  
    if (antX != 0) sinonime[antX] = sinY;
    
    antonime[sinX] = sinY;
    antonime[sinY] = sinX;

    return true;
}

bool make_rel(int r, int x, int y, vector<int>& sinonime, vector<int>& antonime)
{
    return (r == 1) ? make_sin(x, y, sinonime, antonime) : make_ant(x, y, sinonime, antonime);
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, m, q, r;
    string x, y;

    cin >> n >> m >> q;

    map<string, int> hash;
    vector<int> sinonime(n + 1, 0);
    vector<int> antonime(n + 1, 0);

    for (int i = 1; i <= n; ++i)
    {
        sinonime[i] = i;

        cin >> x;
        hash[x] = i;
    }

    for (int i = 1; i <= m; ++i)
    {
        cin >> r >> x >> y;
        (make_rel(r, hash[x], hash[y], sinonime, antonime)) ? cout << "YES\n" : cout << "NO\n";
    }

    for (int i = 1; i <= q; ++i)
    {
        cin >> x >> y;
        auto px = hash[x];      
        auto py = hash[y]; 
        auto ay = antonime[find(py, sinonime)];

        if (find(px, sinonime) == find(py, sinonime)) cout << "1\n";
        else if (find(px, sinonime) == find(ay, sinonime)) cout << "2\n";
        else cout << "3\n";
    }


    return 0;
}