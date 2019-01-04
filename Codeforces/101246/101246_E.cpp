// https://codeforces.com/gym/101246/problem/E
// https://codeforces.com/gym/101246/submission/25245302

#include <iostream>
#include<fstream>
#include<string>
#include <queue>
#include <algorithm>
#include <set>
#include <string.h>

#define cin f
#define cout g

using namespace std;


int mat[110][110];

int main()
{

    ifstream f("input.txt");
    ofstream g("output.txt");
    int n,k;
    int mat[205][205];
    int vis[205];
    queue<pair<int,int>> v;
    set<int> sol;

    f>> n;

    for(int i = 1; i<= n; ++i)
        for(int j = 1; j<= n; ++j)
            f>>mat[i][j];

    f >> k;
    v.push(make_pair(1,1));
    int niv = 1, road;

    while(k > 0)
    {
        memset(vis,0,205*sizeof(int));
        f >> road;
        if (v.empty()) break;
        while(!v.empty() && v.front().second == niv)
        {
            int el = v.front().first;
            v.pop();
            for(int i = 1; i<=n; ++i) if (vis[i] == 0 && mat[el][i] == road) v.push(make_pair(i,niv+1)), vis[i] = 1;
        }
        niv++;
        k--;
    }

    while(!v.empty())
    {
        sol.insert(v.front().first);
        v.pop();
    }

    g<<sol.size()<<"\n";
    for(int el : sol) g<< el<<" ";


    f.close();
    g.close();

    return 0;
}