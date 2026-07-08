#include <bits/stdc++.h>
using namespace std;

int main() {
    stack<int> Q;
    Q.push(2);
    Q.push(5);
    Q.push(10);
    Q.push(30);

    while(!Q.empty()) {
        cout << Q.top() << " ";
        Q.pop();
    }

    return 0;
}
