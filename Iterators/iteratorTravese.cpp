#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> dq = {5, 10, 15, 20};

    for(auto it = dq.begin(); it != dq.end(); it++) {
        cout << *(it) << " ";
    }

    return 0;
}
