#include <bits/stdc++.h>
using namespace std;

void emplaceback() {

    vector<int> vec;
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.emplace_back(7);
    vec.emplace_back(8);

    for (int val : vec) {
        cout << val << " ";
    }
}

int main () {
    emplaceback();
    return 0;
}