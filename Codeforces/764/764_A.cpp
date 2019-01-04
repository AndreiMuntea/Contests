// https://codeforces.com/contest/764/problem/A
// https://codeforces.com/contest/764/submission/28727849

#include <iostream>
#include <string>
using namespace std;



int main() {

    int n, m, z;
    cin>>n>>m>>z;
    
    int gcd = 1;
    
    //gcd - zsisku
    for(int i=1; i<=z; i++)
    {
        if(n% i == 0 && m%i == 0) gcd = i;
    }

    int lcm = (n*m)/gcd;
    
    cout << (z/lcm);
    

    return 0;
    
}
