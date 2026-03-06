#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {40, 10, 30, 20, 50};

    sort(v.begin(), v.end());

    cout << "Sorted vector: ";

    for(int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }

    return 0;
}
