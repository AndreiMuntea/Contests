// https://codeforces.com/contest/1281/problem/A
// https://codeforces.com/contest/1281/submission/67973469

#include <iostream>
#include <string>
using namespace std;


int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cerr.tie(nullptr);

    int queries = 0;
    string s;

    cin >> queries;

    while (queries--)
    {
        cin >> s;

        switch (s.back())
        {
        case 'o':
            cout << "FILIPINO\n"; break;
        case 'a':
            cout << "KOREAN\n"; break;
        default:
            cout << "JAPANESE\n"; break;
        }
    }

    return 0;
}