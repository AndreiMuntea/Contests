// https://codeforces.com/contest/19/problem/D
// https://codeforces.com/contest/19/submission/68014305

#include <iostream>
#include <algorithm>
#include <functional>
#include <map>
#include <set>
#include <string>
#include <vector>
using namespace std;

struct Point
{
    Point() = default;
    Point(int x, int y) : x{ x }, y{ y } {};

    bool operator<(const Point& Other) const
    {
        return (this->x != Other.x) ? this->x < Other.x
                                    : this->y < Other.y;
    }

    int x = std::numeric_limits<int>::min();
    int y = std::numeric_limits<int>::min();
};

class SegmentedTree
{
public:
    SegmentedTree(size_t NoPoints)
        : Tree{ NoPoints * 4 + 4, Point() },
        noPoints{NoPoints}
    {};

    void Update(size_t Position, const Point& Point)
    {
        Update(1, 0, noPoints - 1, Position, Position, Point);
    }

    Point Query(const Point& Requested)
    {
        return Query(1, 0, noPoints - 1, Requested);
    }

private:

    Point Query(size_t Node, size_t Start, size_t End, const Point& Requested)
    {
        if (Tree[Node].x <= Requested.x || Tree[Node].y <= Requested.y)
        {
            return Point();
        }
        
        if (Start == End)
        {
            return Tree[Node];
        }

        size_t mid = (Start + End) / 2;

        auto solution = Query(Node * 2, Start, mid, Requested);
        if (solution.x == std::numeric_limits<int>::min() || solution.y == std::numeric_limits<int>::min())
        {
            solution = Query(Node * 2 + 1, mid + 1, End, Requested);
        }

        return solution;
    }

    void Update(size_t Node, size_t Start, size_t End, size_t Low, size_t High, const Point& Point)
    {
        if (Start > High || End < Low)
        {
            return;
        }

        if (Start == End)
        {
            Tree[Node] = ::Point(Point);
            return;
        }

        size_t mid = (Start + End) / 2;

        Update(Node * 2, Start, mid, Low, High, Point);
        Update(Node * 2 + 1, mid + 1, End, Low, High, Point);

        Tree[Node] = Combine(Tree[Node * 2], Tree[Node * 2 + 1]);
    }

    Point Combine(const Point& Left, const Point& Right)
    {
        Point node;
        node.x = max(Left.x, Right.x);
        node.y = max(Left.y, Right.y);

        return node;
    }

private:
    vector<Point> Tree;
    size_t noPoints = 0;
};


int main()
{
    ios::sync_with_stdio(false); 
    cin.tie(nullptr); cout.tie(nullptr); cerr.tie(nullptr);

    vector<Point> points;
    vector<pair<int, Point>> queries;

    int n = 0;
    cin >> n;

    while (n--)
    {
        int x = 0, y = 0;
        string s;

        cin >> s >> x >> y;
        Point point{ x,y };

        points.push_back(point);
        
        if (s == "add") queries.push_back({ 'a', point });
        else if (s == "remove") queries.push_back({ 'r',point });
        else queries.push_back({ 'f',point });
    }

    sort(points.begin(), points.end());

    SegmentedTree tree(points.size());

    for (const auto& query : queries)
    {
        auto command = query.first;
        auto point = query.second;

        auto pointMapping = std::lower_bound(points.begin(), points.end(), point);
        
        if (command == 'a') tree.Update(pointMapping - points.begin(), point);
        else if (command == 'r') tree.Update(pointMapping - points.begin(), Point{});
        else if (command == 'f')
        {
            auto p = tree.Query(point);
            if (p.x == std::numeric_limits<int>::min() || p.y == std::numeric_limits<int>::min())
            {
                cout << "-1\n";
            }
            else
            {
                cout << p.x << " " << p.y << "\n";
            }
        }
    }

    return 0;
}