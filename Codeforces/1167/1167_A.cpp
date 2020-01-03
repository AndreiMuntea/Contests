// https://codeforces.com/contest/1167/problem/A
// https://codeforces.com/contest/1167/submission/68001596

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr); cerr.tie(nullptr);

    int queries = 0, length = 0;
    string s;
    cin >> queries;

    while (queries--)
    {
        cin >> length >> s;

        size_t first8 = s.size();

        for (size_t i = 0; i < s.size(); ++i)
        {
            if (s[i] == '8')
            {
                first8 = i;
                break;
            }
        }
        
        (s.size() - first8 >= 11) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}