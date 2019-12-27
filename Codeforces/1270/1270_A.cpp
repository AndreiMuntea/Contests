// https://codeforces.com/problemset/problem/1207/A
// https://codeforces.com/contest/1207/submission/67692150

#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr); cout.tie(nullptr);

    int query;
    cin >> query;

    while (query--)
    {
        int buns, beefs, chickens, priceBeef, priceChicken;
        cin >> buns >> beefs >> chickens >> priceBeef >> priceChicken;

        int profit = 0;
        
        if (priceBeef < priceChicken)
        {
            swap(priceBeef, priceChicken);
            swap(beefs, chickens);
        }

        auto hamburgers = min(buns / 2, beefs);
        profit += (hamburgers * priceBeef);
        buns -= (hamburgers * 2);

        hamburgers = min(buns / 2, chickens);
        profit += (hamburgers * priceChicken);

        cout << profit << endl;
    }

    return 0;
}