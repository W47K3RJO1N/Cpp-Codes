#include <bits/stdc++.h>
using namespace std;

int main() {

    set<int> s;

    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);
    s.insert(7);

    // s.insert(6); // stores only unique element

    cout << "lower bound = " << *(s.lower_bound(4)) << endl;

    cout << s.size() << endl;
    for (auto val : s) {
        cout << val << " ";
    }
    cout << endl;

    return 0;

}
