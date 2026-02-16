#include <bits/stdc++.h>
using namespace std;

int main() {
    multimap<string , int> m;

   

    m.emplace("iphone", 100);
    m.emplace("iphone", 100);
    m.emplace("iphone", 100);
    m.emplace("iphone", 100);

    m.erase("iphone"); // for deleting all keys of same elements

  m.erase(m.find("iphone"));

    for (auto p : m) {
        cout << p.first << " " << p.second << endl;

    }
    
    return 0;
}
