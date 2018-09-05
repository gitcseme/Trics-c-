#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
    Point(int xx, int yy) {
        x = xx;
        y = yy;
    }

    bool operator < (const Point& rhs) const {
        if (x != rhs.x)
            return x > rhs.x;
        return y > rhs.y;
    }

};

/*
bool operator < (Point a, Point b) {
    if (a.x != b.x)
        return a.x > b.x;
    return a.y > b.y;
}
*/

int main() {

    freopen("input.txt", "r", stdin);

    priority_queue<Point> pq;
    int a, b;
    while (cin >> a >> b) {
        pq.push(Point(a, b));
    }

    while (!pq.empty()) {
        auto p = pq.top(); pq.pop();
        cout << p.x << " " << p.y << "\n";
    }

    return 0;
}
