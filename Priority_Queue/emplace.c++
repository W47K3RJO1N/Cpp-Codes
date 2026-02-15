#include <bits/stdc++.h>
using namespace std;

int main() {

    priority_queue<int> p;

    p.emplace(3);
    p.emplace(4);
    p.emplace(5);
    p.emplace(6);
    p.emplace(1);

    while (!p.empty()) {
        cout << p.top() << " ";
        p.pop();

    }
    cout << endl;
    return 0;
}