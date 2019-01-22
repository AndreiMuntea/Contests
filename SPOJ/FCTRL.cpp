// https://www.spoj.com/problems/FCTRL/

#include <iostream>
#include <fstream>
#include <chrono>
#include <iomanip>
#include <algorithm>
#include <string>
#include <vector>
#include <map>
#include <set>
#include <queue>
#include <numeric>
#include <bitset>
using namespace std;

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cerr.tie(nullptr);

    int T = 0;
    unsigned long long N = 0;
    unsigned long long Result = 0;
    
    cin >> T;
    while (T--)
    {
        cin >> N;

        Result = 0;
        for (unsigned long long S = 5; S <= N; S *= 5)
        {
            Result += (N / S);
        }

        cout << Result << "\n";
    }


    return 0;
}