#include <iostream>
#include <string>
#include <vector>
using namespace std;


int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    
    string on;
    bool ok = false;
    vector<string> hand(5);

    cin >> on;
    for (size_t i = 0; i < hand.size(); ++i) cin >> hand[i];

    for (const auto& h : hand)
    {
        ok = ok || h[0] == on[0] || h[1] == on[1];
    }

    (ok) ? cout << "YES\n" : cout << "NO\n";

    return 0;
}
