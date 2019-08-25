#include <bits/stdc++.h>
using namespace std;

int main() {

    vector<int> v {2, 3, 5, 6, 7, 8, 11, 13, 17, 19, 23, 29, 31};

    int x = 7;
    int low = lower_bound(v.begin(), v.end(), x) - v.begin(); // >= x
    int up = upper_bound(v.begin(), v.end(), x) - v.begin();  //  > x

    cout << low << " " << up << "\n";
    cout << v[low] << " " << v[up];

    return 0;
}
