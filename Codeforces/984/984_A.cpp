// https://codeforces.com/contest/984/problem/A
// https://codeforces.com/contest/984/submission/38437486

#include <algorithm>
#include <vector>
#include <iostream>
using namespace std;

int main()
{
    int n, x;
    vector<int> v;
    
    cin>>n;
    
    for(int i = 0; i < n; ++i)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(),v.end());
    
    cout << v[(n-1)/2];
    
    return 0;
}