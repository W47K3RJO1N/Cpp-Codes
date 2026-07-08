#include <bits/stdc++.h>
using namespace std;

int main() {

    stack<int> s;

    s.push(10);

    cout << "Top element: " << s.top() << endl;   

    s.pop();

    cout << "Top after pop: " << s.top() << endl; 

    return 0;
}
