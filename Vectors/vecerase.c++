#include <bits/stdc++.h>
using namespace std;

void vecerase() {
    vector<int> vec = {1,2,3,4,5,6,7};
    vec.erase(vec.begin(), vec.begin() + 2);
    for (int val : vec) {
        cout << val << " ";

    }
}

int main () {
    vecerase() ;
    return 0;
}