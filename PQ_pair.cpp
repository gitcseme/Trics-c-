#include <bits/stdc++.h>
using namespace std;

typedef pair<int, int> P;

struct Order
{
    bool operator()(P const& a, P const& b)
    {
        return a.second > b.second;
    }
};

int main() {
    priority_queue< P, vector<P>, Order > pq;

    /*pq.push(make_pair('a', 25));
    pq.push(make_pair('d', 50));
    pq.push(make_pair('b', 4));
    pq.push(make_pair('c', 5));*/
    pq.push(make_pair(1, 25));
    pq.push(make_pair(5, 50));
    pq.push(make_pair(4, 4));
    pq.push(make_pair(0, 5));

    while (!pq.empty()) {
        auto c = pq.top(); pq.pop();
        cout << c.first << " " << c.second << "\n";
    }

}

