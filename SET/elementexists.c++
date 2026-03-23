#include <bits/stdc++.h>
using namespace std;

int main() {
    set<int> s = {1, 2, 3, 4};

    if (s.find(3) != s.end())
        cout << "Found";
    else
        cout << "Not Found";
}
