#include <bits/stdc++.h>
using namespace std;

void popfront() {
    list<int> l;
    l.emplace_front(1);
    l.emplace_front(2);
    l.emplace_front(3);
    l.emplace_front(4);
    l.emplace_front(5);

    l.pop_front();

    for (int val : l) {
        cout << val << " ";
    }
}

int main() {
    popfront();
    return 0;
}