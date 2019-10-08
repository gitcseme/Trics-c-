#include <bits/stdc++.h>
using namespace std;

/***
    1. string reverse.
    2. substring find.
    3. transform
    4. remove_if
    5. accumulate
    6. upper_bound and lower_bound
    7. max_element   min_element
    8. erase using iterator
*/

int main() {
    string s = "Hello";
    reverse(s.begin(), s.end());
    cout << s << "\n\n";

    string sub = "ll";
    if(s.find(sub) != string::npos) {
        cout << "Found" << "\n\n";
    }

    cout << "\n------------------------------------\n";

    vector <int> v {1, 2, 3, 4, 5, 6, 7, 8, 9};
    vector <int> out(v.size());

    transform(v.begin(), v.end(), out.begin(), [](int &val) {
        return val*3;
    });
    for(int i : out) cout << i << " ";
    cout << "\n------------------------------------\n";

    vector<int>::iterator endFilter = remove_if(out.begin(), out.end(), [](int &val) {
        if (val % 2 == 0)
            return true;
        return false;
    });

    for (auto itr = out.begin(); itr != endFilter; ++itr)
        cout << *itr << " ";
    cout << "\n------------------------------------\n";

    int sum = accumulate(v.begin(), v.end(), 0, [](int f, int s) {
        return f+s;
    });
    cout << sum << "\n";
    cout << "\n------------------------------------\n";

    vector <int> vk(10);
    vk[0] = 1;
    vk[1] = 2;
    vk[2] = 3;
    vk[3] = 3;
    vk[4] = 5;
    vk[5] = 7;

    vector <int> :: iterator lower, upper;
    int hi = upper_bound(vk.begin(), vk.end(), 3) - vk.begin(); // 4
    int low = lower_bound(vk.begin(), vk.end(), 3) - vk.begin(); // 2
    cout << hi << " " << low;
    cout << "\n------------------------------------\n";

    vector <int> t(10);
    t[0] = 5;
    t[1] = 6;
    t[2] = -3;
    t[3] = 9;
    t[4] = 27;
    t[5] = 4;
    int minel = *min_element(t.begin(), t.end());
    int maxel = *max_element(t.begin(), t.end());
    cout << minel << " " << maxel << "\n";
    cout << "\n------------------------------------\n";


    vector <int> tt(5);
    tt[0] = 2;
    tt[1] = 3;
    tt[2] = 5;
    tt[3] = -1;
    tt[4] = 1;
    auto mx = max_element(tt.begin(), tt.end()); // Returns iterator
    cout << *mx << "\n\n";
    tt.erase(mx);
    for(int x : tt) cout << x << "\n";


    return 0;
}
