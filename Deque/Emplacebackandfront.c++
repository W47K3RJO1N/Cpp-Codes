#include <bits/stdc++.h>
using namespace std;

int main() {
    deque<int> d;
    d.emplace_back(1);
    d.emplace_back(3);
    d.emplace_front(2);
    
    for (int val : d) { 
        cout << val << " ";
    }
        return 0;
    
}
