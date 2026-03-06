#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {5, 10, 15, 20};

    int sum = 0;

    for(int i = 0; i < v.size(); i++) {
        sum = sum + v[i];
    }

    cout << "Sum of elements: " << sum;

    return 0;
}
