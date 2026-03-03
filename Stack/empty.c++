#include <bits/stdc++.h>
using namespace std;

int main() {

    stack<int> s;

    if(s.empty())
        cout << "Stack is empty\n";
    else
        cout << "Stack is not empty\n";

    s.push(10);
    s.push(20);

    if(s.empty())
        cout << "Stack is empty\n";
    else
        cout << "Stack is not empty\n";

    return 0;
}
