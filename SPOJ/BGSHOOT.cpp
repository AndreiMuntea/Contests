// https://www.spoj.com/problems/BGSHOOT/
#include <vector>
#include <iostream>
#include <map>
#include <set>
#include <algorithm>
using namespace std;

class SegmentedTree
{
public:
    SegmentedTree(const vector<int>& Array) : 
        arraySize{Array.size()},
        tree(Array.size() * 4 + 4, 0)
    {
        Build(Array, 1, 0, arraySize - 1);
    }

    int Query(size_t Low, size_t High)
    {
        return Query(1, 0, arraySize - 1, Low, High);
    }

    ~SegmentedTree() = default;

private:

    void Build(const vector<int>& Array, size_t Node, size_t Start, size_t End)
    {
        if (Start == End)
        {
            tree[Node] = Array[Start];
            return;
        }

        int mid = (Start + End) / 2;

        Build(Array, Node * 2, Start, mid);
        Build(Array, Node * 2 + 1, mid + 1, End);

        tree[Node] = max(tree[Node * 2], tree[Node * 2 + 1]);
    }

    int Query(size_t Node, size_t Start, size_t End, size_t Low, size_t High)
    {
        if (Low > End || High < Start)
        {
            return numeric_limits<int>::min();
        }

        if (Start >= Low && End <= High)
        {
            return tree[Node];
        }

        size_t mid = (Start + End) / 2;

        auto left = Query(Node * 2, Start, mid, Low, High);
        auto right = Query(Node * 2 + 1, mid + 1, End, Low, High);

        return max(left, right);
    }

    vector<int> tree;
    size_t arraySize;
};

vector<pair<int, int>> ReadPairs()
{
    int noPairs;

    cin >> noPairs;
    vector<pair<int, int>> pairs(noPairs);

    for (int i = 0; i < noPairs; ++i)
    {
        cin >> pairs[i].first >> pairs[i].second;
    }
    
    return pairs;
}

map<int, int> CoordinateCompression(const vector<pair<int, int>>& Data, const vector<pair<int, int>>& Queries)
{
    set<int> uniques;
    map<int, int> compression;

    for (const auto& d : Data)
    {
        uniques.insert(d.first);
        uniques.insert(d.second);
    }

    for (const auto& q : Queries)
    {
        uniques.insert(q.first);
        uniques.insert(q.second);
    }

    int noElements = 0;
    for (const auto& u : uniques)
    {
        compression[u] = noElements++;
    }

    return compression;
}


int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    auto data = ReadPairs();
    auto queries = ReadPairs();
    auto compressed = CoordinateCompression(data, queries);

    vector<int> arr(compressed.size() + 1, 0);

    for (const auto& d : data)
    {
        arr[compressed[d.first]]++;
        arr[compressed[d.second] + 1]--;
    }

    for (size_t i = 1; i < arr.size(); ++i)
    {
        arr[i] += arr[i - 1];
    }

    SegmentedTree tree(arr);

    for (const auto& q : queries)
    {
        auto x = compressed[q.first];
        auto y = compressed[q.second];

        cout << tree.Query(x, y) << "\n";
    }

    return 0;
}