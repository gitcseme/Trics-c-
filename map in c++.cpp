#include <bits/stdc++.h>
using namespace std;

int main() {
    map <string, int> m;
    m["vo"] = 5;
    m["st"] = 50;
    m["sh"] = 555;

    if (m.find("sh") != m.end())
        cout << "yeah!!\n";
    cout << m.count("sss") << "\n\n";

    /* Iterate the map using iterator */
    map<int, int> mp;
    mp[2] = 222;
    mp[5] = 555;
    mp[13] = 13313;

    for (map<int, int>::iterator it = mp.begin(); it != mp.end(); ++it) {
        cout << it->first << "\n"; // (*it).first
    }

    return 0;
}
