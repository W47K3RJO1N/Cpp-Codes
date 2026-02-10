#include <bits/stdc++.h>
using namespace std;

void listinitialization() {

    list<int> l = { 1, 2, 3};

    list<int> l2 (l);

    for (int val : l) {
        cout << val << " ";
    }
    cout << endl;

    for (int val : l2) {
        cout << val << " ";
    }

}

int main () {
    listinitialization() ;
    return 0;
}