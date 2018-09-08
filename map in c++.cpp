#include <bits/stdc++.h>
using namespace std;

/*
    map uses Red-black-tree
    unordered-map uses Hash-table

    1. Is the key exists.
    2. insert() will not override.
    3. multi-map allows same keys. and uses insert() only.
    4. unordered-map is faster than regular map [because regular maps stores elements in sorted order.]
    5. unordered-multi-map is flexible.
    6. sort map keys using std::greater<int> or std::less<int>
    7. comparison function defined own.
    8. sorting map according to values is difficult.
*/

template <typename T> struct mycomp {
    bool operator() (const T& o1, const T& o2) const {
        return o1 > o2;
    }
};

int main() {
    map <string, int> m;
    m["vo"] = 5;
    m["st"] = 50;
    m["sh"] = 555;

    if (m.find("sh") != m.end())
        cout << "yeah!!\n";
    cout << m.count("sss") << "\n---------------------------\n";

    /* Iterate the map using iterator */
    map<int, int> mp;
    mp[2] = 222;
    mp[5] = 555;
    mp[13] = 13313;
    mp.insert(make_pair(13, 20000)); // will not override.

    // auto --> map<int, int>::iterator
    for (auto it = mp.begin(); it != mp.end(); ++it) {
        cout << it->first << " " << it->second << "\n"; // (*it).first
    }
    cout << "\n-------------------------\n";

    /*  Multi-map in c++ */
    multimap <int, int> mmp; // multi map uses insert()
    mmp.insert(make_pair(4, 400));
    mmp.insert(make_pair(10, 700));
    mmp.insert(make_pair(3, 300));
    mmp.insert(make_pair(10, 800));
    mmp.insert(make_pair(3, 500));
    //iterate multi-map
    for (auto it = mmp.begin(); it != mmp.end(); ++it) {
        cout << it->first << " " << it->second << "\n";
    }
    cout << "\n-------------------------\n";

    /* Unordered map is faster then map cause it uses Hash-table */
    unordered_map <int, int> ump;
    ump.insert(make_pair(4, 400));
    ump.insert(make_pair(10, 700));
    ump[3] = 300;
    ump.insert(make_pair(3, 500));
    ump.insert(make_pair(10, 800));
    // iterate unordered map
    for (auto it = ump.begin(); it != ump.end(); ++it) {
        cout << it->first << " " << it->second << "\n";
    }
    cout << "\n-------------------------\n";

    unordered_multimap <int, int> ummp;
    ummp.insert(make_pair(4, 400));
    ummp.insert(make_pair(10, 700));
    ummp.insert(make_pair(3, 300));
    ummp.insert(make_pair(3, 500));
    ummp.insert(make_pair(10, 800));
    for (auto it = ummp.begin(); it != ummp.end(); ++it) {
        cout << it->first << " " << it->second << "\n";
    }
    cout << "\n-------------------------\n";

    map <int, string, greater<int> > mis;
    mis[20] = "abc";
    mis[2] = "xyz";
    mis[9] = "def";
    for (auto el : mis) {
        cout << el.first << " " << el.second << "\n";
    }
    cout << "\n-------------------------\n";

    // A custom comparator this map is defined UP.

    map <int, string, mycomp<int> > MIS;  // can use greater<int> or less<int>
    MIS[20] = "abc";
    MIS[2] = "xyz";
    MIS[9] = "def";
    MIS[4] = "zzz";
    for (auto el : MIS) {
        cout << el.first << " " << el.second << "\n";
    }
    cout << "\n-------------------------\n";



    return 0;
}
