#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 25, 7, 40, 15};

    int largest = v[0];

    for(int i = 1; i < v.size(); i++) {
        if(v[i] > largest) {
            largest = v[i];
        }
    }

    cout << "Largest element: " << largest;

    return 0;
}
