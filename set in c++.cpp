#include <bits/stdc++.h>
using namespace std;
/*
    1. Sets uses binary search trees
    2. set stores elements sorted
    3. unordered-set faster than set.
    4. own comparison function defined.
    5. set element order can be tracked via a vector [in another code].
*/

struct cmpStruct {
  bool operator() (int const & lhs, int const & rhs) const
  {
    return lhs > rhs;
  }
};

template <typename T> struct mycomp {
    bool operator() (const T& o1, const T& o2) const {
        return o1.second < o2.second;
    }
};

int main () {
    set<int, cmpStruct > myInverseSortedSet;

    set <int, greater<int> > st;
    st.insert(5);
    st.insert(9);
    st.insert(1);
    st.insert(3);
    for (auto e : st)
        cout << e << " ";
    cout << "\n-------------------------\n";

    cout << st.count(6) << "\n";
    if (st.count(3))
        cout << "yes\n";
    cout << "\n-------------------------\n";

    set <pair<int, int>, mycomp<pair<int, int> > > spii; // greater<pair<int, int>>
    spii.insert({2,5});
    spii.insert({11,9});
    spii.insert({9,15});
    spii.insert({29,1});
    for (auto el : spii)
        cout << el.first << " " << el.second << "\n";


    return 0;
}
