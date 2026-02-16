#include <bits/stdc++.h>
using namespace std;

int main() {
    map<string , int> m;

    m["Tv"] = 100;
    m["Headphones"] = 30;
    m["Cars"] = 400;

    m.emplace("iphone", 100);

    for (auto p : m) {
        cout << p.first << " " << p.second << endl;

    }

    if (m.find("Tv") != m.end()) {
        cout << "found\n";
    }
    else {
        cout << "not found\n";
    }

    return 0;
}