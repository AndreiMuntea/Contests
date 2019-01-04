// https://codeforces.com/contest/570/problem/B
// https://codeforces.com/contest/570/submission/28728095

#include <iostream>
using namespace std;



int main() {

    int n, m;
    cin>>n>>m;
    
    if (n == 1){
        
        cout<<"1";
    return                      0;
    }
    
    cout<<( ( m-1 >= n-m)?(m-1):(m+1)); 
     
    return 0;
    
}
