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

    cout << "count = " << m.count("Tv") << endl; // for instance value
     cout << "count = " << m["Tv"] << endl; // for the no of qunatity of key used in map
    return 0;
}