#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string , int> m;

    m["tv"] = 100;
    m["headphones"] = 30;
    m["cars"] = 400;

    m.insert({"iphone", 100});

    for (auto p : m) {
        cout << p.first << " " << p.second << endl;

    }
    return 0;
}
