#include <bits/stdc++.h>
using namespace std;

template <typename T>
void print (T val) {
    cout << val << "\n";
}

template <typename F, typename S>
void display (F o1, S o2) {
    cout << o1 << " " << o2 << "\n";
}

int main() {
    print("this is a string!");
    print(5.32454589);
    print(125);
    cout << "\n----------------------------\n";

    display ("string val", 5);
    display ("string val", 5.02158789);
    display (54654564564564654, 5);
    display (5.3546, 987.6465468);
    display (9, 9);
    display ("string val", "string val");

    return 0;
}
