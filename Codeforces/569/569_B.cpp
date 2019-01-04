// https://codeforces.com/contest/569/problem/B
// https://codeforces.com/contest/569/submission/17996677

#include <iostream>
#include <string.h>
#include <vector>
using namespace std;


int main(){
    int v[100003],f[100003],n;
    vector<int> ramas;
    cin>>n;
    int contor=0;
    memset(f,0,100003*sizeof(int));
    for(int i = 1; i<=n; i++){
        cin>>v[i];
        f[v[i]]++;
    }
    for(int i=1;i<=n;i++)
        if(f[i]==0)
            ramas.push_back(i);
    for(int i=1;i<=n;i++){
        if(f[v[i]]>1 || v[i]> n || v[i]<=0){//duplicate
            f[v[i]]--;
            cout << ramas[contor++] << " ";
        }
        else{
            cout << v[i] << " ";
        }
    }
    return 0;
}
