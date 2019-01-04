// https://codeforces.com/contest/766/problem/A
// https://codeforces.com/contest/766/submission/28727945

#include <iostream>
#include <string>
using namespace std;



int main() {

      string a, b;
      cin>>a>>b;
      
      if( a == b)
        cout<<"-1";
    else
        cout<<max(a.size(), b.size());

    return 0;
    
}
