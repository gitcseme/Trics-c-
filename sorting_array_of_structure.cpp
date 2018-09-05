#include <bits/stdc++.h>
using namespace std;

struct Point {
    int x, y;
};

/*
bool comp (Point a, Point b) {
    if (a.x != b.x)
        return a.x < b.x;
    return a.y < b.y;
}
*/

bool operator < (Point a, Point b) {
    if (a.x != b.x)
        return a.x < b.x;
    return a.y < b.y;
}

int main() {

    freopen("input.txt", "r", stdin);
    Point v[10];
    int a, b;

    for (int i = 0; i < 5; i++) {
        cin >> a >> b;
        v[i].x = a, v[i].y = b;
    }

    //sort(v, v+5, comp);
    sort(v, v+5);

    for (int i = 0; i < 5; ++i)
        cout << v[i].x << " " << v[i].y << "\n";


    return 0;
}
