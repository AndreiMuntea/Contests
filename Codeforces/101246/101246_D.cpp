// https://codeforces.com/gym/101246/problem/D
// https://codeforces.com/gym/101246/submission/25263041

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



vector<int> vecini[100100];
int viz[100100];
int nivel[100100];
int grd[100100];


void bfs(){
    queue<int> q;
    q.push(1);
    viz[1]=1;
    int p;
    while(!q.empty()){
        p=q.front();
        q.pop();

        for(int vec:vecini[p]){
            if(viz[vec]==0){

                q.push(vec );
                viz[vec]=1;
                nivel[vec]=nivel[p]+1;

            }
        }

    }
}


int mex(set<int>& s){

    int m=0;
    while( s.find(m)!=s.end() )m++;
    return m;
}

void dfs(int nod){

    set<int> s;
    viz[nod]=1;
    bool frunza=true;
    for(int vec:vecini[nod]){
        if( nivel[vec]==nivel[nod]+1){
            frunza=false;
            dfs(vec);
            s.insert(grd[vec]);
        }
    }

    if(frunza)
        grd[nod]=0;
    else
        grd[nod]=mex(s);
}



int main()
{

    ifstream f("input.txt");
    ofstream g("output.txt");


    int n, m;
    cin>>n>>m;

    int x, y;
    for(int i=0; i<m; i++)
    {
        cin>>x>>y;
        vecini[x].push_back(y);
        vecini[y].push_back(x);
    }

    bfs();
    memset(viz, 0, sizeof(int)*100100);
    dfs(1);
    if(!grd[1]){
        cout<<"Nikolay\n";

    }
    else
        cout<<"Vladimir\n";
    //cout<<nivel[1]<<" "<<nivel[2]<<" "<<nivel[3]<< " "<<nivel[4]<<"\n";
    //cout<<grd[1]<<" "<<grd[2]<<" "<<grd[3]<< " "<<grd[4];





    f.close();
    g.close();

    return 0;
}