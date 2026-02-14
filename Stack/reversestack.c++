#include <bits/stdc++.h>
using namespace std;

int main() {
    int num = 1234;
    stack<int> s;

    while(num > 0) {
        s.push(num % 10);
        num /= 10;
    }

    cout << "Reversed number: ";
    while(!s.empty()) {
        cout << s.top();
        s.pop();
    }
  return 0;
}
