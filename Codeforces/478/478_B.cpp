// https://codeforces.com/contest/478/problem/B
// https://codeforces.com/contest/478/submission/28727713

#include <iostream>
#include <string>
using namespace std;

int main() {

    int n, m;
    
    
    cin >> n >> m;
    
    unsigned long long mic = n / m, mic2 = n % m;
    unsigned long long mare = n - m  + 1;
    
    
    cout << mic2 * (mic + 1) * mic / 2 +  (m - mic2) * (mic - 1 ) * mic / 2<< " " << (mare - 1) * mare / 2;
    

    return 0;
    
}
