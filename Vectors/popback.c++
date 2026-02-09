#include <bits/stdc++.h>
using namespace std;

void popback() {

    vector<int> vec;
    vec.push_back(3);
    vec.push_back(4);
    vec.push_back(5);
    vec.push_back(6);
    vec.pop_back();
    vec.pop_back();

    for (int val : vec) {
        cout << val << " ";
    }
}

int main () {
    popback();
    return 0;
}