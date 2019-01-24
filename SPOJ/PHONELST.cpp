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

class Node
{
    friend class Trie;
public:
    Node() = default;
    ~Node()
    {
        for (auto& node : Children) delete node.second;
    }

private:
    map<char, Node*> Children;
    size_t Words = 0;
};

class Trie
{
public:
    Trie() { Root = new Node(); }
    ~Trie() { delete Root; }

    bool InsertUnique(const string& String)
    {
        auto current = Root;
        bool ok = false;
        for (auto& c : String)
        {
            if (current->Children.find(c) == current->Children.end())
            {
                current->Children[c] = new Node();
                ok = true;
            }

            current = current->Children[c];
            if (current->Words != 0)
            {
                return false;
            }
        }

        current->Words++;
        return ok;
    }

private:
    Node* Root;
};


int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr); cerr.tie(nullptr);

    int t, n;
    cin >> t;

    while (t--)
    {
        cin >> n;
        Trie trie;
        string s; 
        bool ok = true;

        for (int i = 1; i <= n; ++i)
        {
            cin >> s;
            ok = ok && trie.InsertUnique(s);
        }

        (ok) ? cout << "YES\n" : cout << "NO\n";
    }

    return 0;
}