#include <bits/stdc++.h>
using namespace std;

int main() {
    pair<int, int> p = {10, 20};

    cout << "Before: " << p.first << " " << p.second << endl;

    swap(p.first, p.second);

    cout << "After: " << p.first << " " << p.second << endl;

    return 0;
}
