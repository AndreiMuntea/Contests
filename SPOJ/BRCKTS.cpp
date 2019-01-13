// https://www.spoj.com/problems/BRCKTS/

#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

struct Node
{
    Node(char Bracket)
    {
        if (Bracket == ')')
        {
            StartClosed = 1;
        }
        else
        {
            EndOpened = 1;
        }
    }

    Node() = default;
    ~Node() = default;

    int StartClosed = 0;
    int EndOpened = 0;
};

class SegmentTree
{
public:
    SegmentTree(const string& Array) :
        Array{ Array },
        Tree(Array.size() * 4 + 4, Node())
    {
        Build(1, 0, Array.size() - 1);
    };

    bool Query(size_t Low, size_t High)
    {
        auto node = Query(1, 0, Array.size() - 1, Low, High);
        return (node.StartClosed == 0 && node.EndOpened == 0);
    }

    void Update(size_t Low, size_t High)
    {
        Update(1, 0, Array.size() - 1, Low, High);
    }

    ~SegmentTree() = default;

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

    void Update(size_t Node, size_t Start, size_t End, size_t Low, size_t High)
    {
        if (Low > End || High < Start)
        {
            return;
        }

        if (Start == End)
        {
            Array[Start] = (Array[Start] == ')') ? '(' : ')';
            Tree[Node] = ::Node(Array[Start]);
            return;
        }

        size_t mid = (Start + End) / 2;

        Update(Node * 2, Start, mid, Low, High);
        Update(Node * 2 + 1, mid + 1, End, Low, High);

        Tree[Node] = Combine(Tree[Node * 2], Tree[Node * 2 + 1]);
    }

    Node Query(size_t Node, size_t Start, size_t End, size_t Low, size_t High)
    {
        if (Low > End || High < Start)
        {
            return ::Node();
        }

        if (Low >= Start && End <= High)
        {
            return Tree[Node];
        }

        size_t mid = (Start + End) / 2;

        auto left = Query(Node * 2, Start, mid, Low, High);
        auto right = Query(Node * 2 + 1, mid + 1, End, Low, High);
        
        return Combine(left, right);
    }

    Node Combine(const Node& Left, const Node& Right)
    {
        Node node;

        node.StartClosed = Left.StartClosed;
        node.EndOpened = Right.EndOpened;

        node.EndOpened += max(0, Left.EndOpened - Right.StartClosed);
        node.StartClosed += max(0, Right.StartClosed - Left.EndOpened);

        return node;
    }

    string Array;
    vector<Node> Tree;
};


int main()
{
    ios::sync_with_stdio(false); cin.tie(nullptr);

    int n, m, k;
    string s;

    for (int i = 1; i <= 10; ++i)
    {
        cin >> n >> s >> m;
        SegmentTree tree(s);

        cout << "Test " << i << ":\n";
        for (int j = 1; j <= m; ++j)
        {
            cin >> k;
            if (k > 0) tree.Update(k - 1, k - 1);
            else tree.Query(0, s.size() - 1) ? cout << "YES\n" : cout << "NO\n";
        }

    }

    return 0;
}