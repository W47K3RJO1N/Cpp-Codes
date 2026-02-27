#include <bits/stdc++.h>
using namespace std;

void printVector(vector<int> v, int i) {
    if (i == v.size()) return;
    cout << v[i] << " ";
    printVector(v, i + 1);
}

int main() {
    vector<int> v = {1, 2, 3, 4};
    printVector(v, 0);
}
