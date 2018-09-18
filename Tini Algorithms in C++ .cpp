#include <bits/stdc++.h>
using namespace std;

/***
    1. string reverse.
    2. substring find.
    3. transform
    4. remove_if
    5. accumulate
    6. upper_bound and lower_bound
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
    vk[4] = 4;
    vk[5] = 7;

    vector <int> :: iterator lower, upper;
    int low = lower_bound(vk.begin(), vk.end(), 3) - vk.begin(); // 2
    int hi = upper_bound(vk.begin(), vk.end(), 3) - vk.begin(); // 4

    cout << low << " " << hi;


    return 0;
}
