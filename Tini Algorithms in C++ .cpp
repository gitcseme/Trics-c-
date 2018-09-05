#include <bits/stdc++.h>
using namespace std;

/***
    1. string reverse.
    2. substring find.
*/

int main() {
    string s = "Hello";
    reverse(s.begin(), s.end());
    cout << s << "\n\n";

    string sub = "ll";
    if(s.find(sub) != string::npos) {
        cout << "Found" << "\n\n";
    }


    return 0;
}
