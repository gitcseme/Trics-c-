#include <bits/stdc++.h>
using namespace std;

int main () {
    vector<string> v;
    string t;
    getline(cin, t);
    stringstream ss(t);

    string token;
    while (ss >> token) {
        v.push_back(token);
    }

    for (string x : v)
        cout << x << " ";

}
