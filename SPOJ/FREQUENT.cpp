// https://www.spoj.com/problems/FREQUENT/
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node
{
    Node() = default;
    ~Node() = default;

    Node(int Value)
    {
        LeftValue = Value;
        RightValue = Value;
        LeftMaxCounter = 1;
        RightMaxCounter = 1;
        CombinedMaxCounter = 1;
    }

    int LeftValue = 0;
    int RightValue = 0;
    int LeftMaxCounter = 0;
    int RightMaxCounter = 0;
    int CombinedMaxCounter = 0;
};

class SegmentTree
{
public:
    SegmentTree(const vector<int>& Array) :
        Array{ Array },
        Tree( Array.size() * 4 + 4, Node())
    {
        Build(1, 0, Array.size() - 1);
    }

    int Query(size_t Low, size_t High)
    {
        vector<size_t> path;
        Query(1, 0, Array.size() - 1, Low, High, path);

        Node node = Tree[path[0]];
        for (size_t i = 1; i < path.size(); ++i)
        {
            Node n = Tree[path[i]];
            node = Combine(node, n);
        }

        return max(node.CombinedMaxCounter, max(node.LeftMaxCounter, node.RightMaxCounter));
    }

private:
    void Build(size_t Node, size_t Start, size_t End)
    {
        if (Start == End)
        {
            Tree[Node] = ::Node(Array[Start]);
            return;
        }

        size_t mid = (Start + End) / 2;

        Build(Node * 2, Start, mid);
        Build(Node * 2 + 1, mid + 1, End);

        Tree[Node] = Combine(Tree[Node * 2], Tree[Node * 2 + 1]);
    }

    void Query(size_t Node, size_t Start, size_t End, size_t Low, size_t High, vector<size_t>& Path)
    {
        if (Start > High || End < Low)
        {
            return;
        }

        if (Low <= Start && End <= High)
        {
            Path.push_back(Node);
            return;
        }

        size_t mid = (Start + End) / 2;

        Query(Node * 2, Start, mid, Low, High, Path);
        Query(Node * 2 + 1, mid + 1, End, Low, High, Path);
    }

    Node Combine(const Node& Left, const Node& Right)
    {
        Node node;

        node.LeftValue = Left.LeftValue;
        node.RightValue = Right.RightValue;

        node.LeftMaxCounter = Left.LeftMaxCounter;
        node.RightMaxCounter = Right.RightMaxCounter;

        node.CombinedMaxCounter = max(Left.CombinedMaxCounter, Right.CombinedMaxCounter);

        if (Right.LeftValue == Left.LeftValue)
        {
            node.LeftMaxCounter += Right.LeftMaxCounter;
        }

        if (Left.RightValue == Right.RightValue)
        {
            node.RightMaxCounter += Left.RightMaxCounter;
        }

        if (Right.LeftValue == Left.RightValue)
        {
            node.CombinedMaxCounter = max(node.CombinedMaxCounter, Left.RightMaxCounter + Right.LeftMaxCounter);
        }

        return node;
    }

    vector<int> Array;
    vector<Node> Tree;
};


int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);
    
    int n, q, r, l;

    cin >> n;
    while (n != 0)
    {
        cin >> q;
        vector<int> v(n, 0);

        for (int i = 0; i < n; ++i) cin >> v[i];
        SegmentTree tree(v);

        for (int i = 1; i <= q; ++i)
        {
            cin >> r >> l;
            cout << tree.Query(r - 1, l - 1) << '\n';
        }

        cin >> n;
    }

    return 0;
}