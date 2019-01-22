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

void Play()
{
    unsigned long long start = 0;
    unsigned long long end = 1;
    string result = "y";

    while(result == "y")
    {
        cout << "? " << start << " " << end << endl;
        cin >> result;

        if (result == "y")
        {
            start = end;
            end *= 2;
        }
    }

    while(end - start > 1)
    {
        auto mid = (start + end) / 2;

        cout << "? " << start << " " << mid << endl;
        cin >> result;
        
        (result == "y") ? start = mid : end = mid;
    };

    cout << "! " << start + 1 << endl;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cerr.tie(nullptr);
    
    string status;

    for (cin >> status; status == "start"; cin >> status)
    {
        Play();
    }

    return 0;
}