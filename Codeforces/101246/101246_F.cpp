// https://codeforces.com/gym/101246/problem/F
// https://codeforces.com/gym/101246/submission/25245739

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




int main()
{

    ifstream f("input.txt");
    ofstream g("output.txt");

    int e[110], viz[110]={0};


    int n, fl, x;
    cin>>n>>fl;
    for(int i=0; i<n; i++){
        cin>>e[i];
        viz[e[i]]=1;
    }

    int curpoz=fl;
    int idx=0;
    while(idx < n){
        if(curpoz < e[idx]){

            for(int i=curpoz+1; i<=e[idx]; i++)
            if(viz[i]==1){
                cout<<i<<" ";
                viz[i]=0;
            }


        }
        else{
            for(int i=curpoz-1; i>=e[idx]; i--)
            if(viz[i]==1){
                cout<<i<<" ";
                viz[i]=0;
            }

        }
        curpoz = e[idx];
        while( idx < n && viz[e[idx]]==0)
            idx++;


    }

    f.close();
    g.close();

    return 0;
}