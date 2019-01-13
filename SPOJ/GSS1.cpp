// https://www.spoj.com/problems/GSS1/

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Node
{
    Node(int Value)
    {
        this->Sum = Value;
        this->MaxPrefixSum = Value;
        this->MaxSuffixSum = Value;
        this->MaxCombinedSum = Value;
    }

    Node() = default;
    ~Node() = default;

    long long Sum             = numeric_limits<int>::min();
    long long MaxPrefixSum    = numeric_limits<int>::min();
    long long MaxSuffixSum    = numeric_limits<int>::min();
    long long MaxCombinedSum  = numeric_limits<int>::min();
};

class SegmentedTree
{
public:
    SegmentedTree(const vector<int>& Array):
        Array{Array},
        Tree(Array.size() * 4 + 4, Node())
    {
        Build(1, 0, Array.size() - 1);
    }

    long long Query(size_t Low, size_t High)
    {
        std::vector<size_t> path;

        Query(1, 0, Array.size() - 1, Low, High, path);

        Node previous{ numeric_limits<int>::min() };
        previous.Sum = 0;

        for (auto& nodeIdx : path)
        {
            const auto& node = Tree[nodeIdx];
            previous = Combine(previous, node);
        }

        return MaxSum(previous);
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

    void Query(size_t Node, size_t Start, size_t End, size_t Low, size_t High, std::vector<size_t>& Nodes)
    {
        if (Start > High || End < Low)
        {
            return;
        }

        if (Low <= Start && End <= High)
        {
            Nodes.push_back(Node);
            return;
        }

        size_t mid = (Start + End) / 2;
        Query(Node * 2, Start, mid, Low, High, Nodes);
        Query(Node * 2 + 1, mid + 1, End, Low, High, Nodes);
    }

    Node Combine(const Node& Left, const Node& Right)
    {
        Node node;

        node.Sum = Left.Sum + Right.Sum;
        node.MaxPrefixSum = max(Left.MaxPrefixSum, Left.Sum + Right.MaxPrefixSum);
        node.MaxSuffixSum = max(Right.MaxSuffixSum, Left.MaxSuffixSum + Right.Sum);
        node.MaxCombinedSum = max(Left.MaxCombinedSum, Right.MaxCombinedSum);
        node.MaxCombinedSum = max(node.MaxCombinedSum, Left.MaxSuffixSum + Right.MaxPrefixSum);

        return node;
    }

    long long MaxSum(const Node& Node)
    {
        auto res = Node.Sum;
        res = max(res, Node.MaxCombinedSum);
        res = max(res, Node.MaxPrefixSum);
        res = max(res, Node.MaxSuffixSum);
        
        return res;
    }

    vector<int> Array;
    vector<Node> Tree;
};

vector<int> ReadVector()
{
    int n;
    cin >> n;
    vector<int> v(n, 0);

    for (int i = 0; i < n; ++i)
    {
        cin >> v[i];
    }
    return v;
}

int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);
    
    int q, r, l;

    auto vector = ReadVector();

    SegmentedTree tree(vector);
    
    cin >> q;
    for (int i = 1; i <= q; ++i)
    {
        cin >> r >> l;
        cout << tree.Query(r - 1, l - 1) << '\n';
    }

    return 0;
}