#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {2, 5, 8, 11, 14};

    int count = 0;

    for(int i = 0; i < v.size(); i++) {
        if(v[i] % 2 == 0) {
            count++;
        }
    }

    cout << "Total even numbers: " << count;

    return 0;
}
