#include <bits/stdc++.h>
using namespace std;

int main () {
    priority_queue<int> q;

    q.push(1);
    q.push(3);
    q.push(2);
    q.push(6);

    while(!q.empty()) {
        cout << q.size() << " ";
        q.pop();

    }
    cout << endl;
    return 0;
}