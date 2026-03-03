#include <bits/stdc++.h>
using namespace std;

int main() {

    stack<int> s;

    cout << "Initial size: " << s.size() << endl;

    s.push(10);
    s.push(20);
    s.push(30);

    cout << "Size after pushing 3 elements: " << s.size() << endl;

    s.pop();

    cout << "Size after one pop: " << s.size() << endl;

    return 0;
}
