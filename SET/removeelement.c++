#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s = {1, 2, 3, 4};

    s.erase(2);

    for (int x : s)
        cout << x << " ";
}
