#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cin >> n;
    string binary = bitset<4>(n).to_string();

    cout << binary;

    return 0;
}
