#include <bits/stdc++.h>
using namespace std;

int main() {

    set<int> el;
    vector<int> order;

    int x;
    for(int i = 1; i <= 6; i++) {
        cin >> x;
        if (!el.count(x)) {
            el.insert(x);
            order.push_back(i);
        }
    }

    for (int c : order)
        cout << c << "\n";

    return 0;
}
