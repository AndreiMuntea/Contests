// https://codeforces.com/contest/363/problem/B
// https://codeforces.com/contest/363/submission/46625690

/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, k, x;
    long long min = 0;
    int idx = 0;
    vector<long long> v;
    vector<long long> qp;
    
    cin >> n >> k;
    for(int i = 0; i < n; ++i) 
    {
        cin >> x;
        v.push_back(x);
        qp.push_back(x);
    }
    
    for(int i = 1; i < k; ++i)
    {
        qp[i] += qp[i-1];
    }
    
    min = qp[k-1];
    for(int i = k; i < n; ++i)
    {
        qp[i] = qp[i] + qp[i-1] - v[i-k];
        if(qp[i] < min)
        {
            min = qp[i];
            idx = i - k + 1;
        }
    }

    cout << idx + 1;    
    
    return 0;
}