#include <bits/stdc++.h>
using namespace std;

int sumVector(vector<int>& v, int i) {
    if (i == v.size()) return 0;
    return v[i] + sumVector(v, i + 1);
}

int main() {
    vector<int> v = {1, 2, 3, 4};
    cout << sumVector(v, 0);
}
