#include <bits/stdc++.h>
using namespace std;

int main() {
    list<int> l = {1,2,3,4,5,6};

    for(auto it = l.begin(); it != l.end(); ) {
        if(*it % 2 == 0)
            it = l.erase(it);
        else
            it++;
    }

    for(auto it = l.begin(); it != l.end(); it++)
        cout << *it << " ";

    return 0;
}
