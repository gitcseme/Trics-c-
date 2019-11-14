#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
    Point(int xx, int yy) {
        x = xx;
        y = yy;
    }
};


bool comp (Point a, Point b) {
    if (a.x != b.x)
        return a.x < b.x;
    return a.y < b.y;
}
/*
bool operator < (Point a, Point b) {
    if (a.x != b.x)
        return a.x < b.x;
    return a.y < b.y;
}
*/

int main() {
    freopen("input.txt", "r", stdin);

    vector<Point> v;
    int a, b;
    while(cin >> a >> b) {
        v.push_back(Point(a, b));
    }

    //sort(v.begin(), v.end(), comp);
    sort(v.begin(), v.end(), comp);

    for (Point p : v)
        cout << p.x << " " << p.y << "\n";

    return 0;
}
