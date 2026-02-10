#include <bits/stdc++.h>
using namespace std;

void iteratorbegin() {
vector<int> vec = {1 , 23 ,4 ,5 ,6};

    vector<int>::iterator it;
    for (it = vec.begin() ; it != vec.end(); it++) {
        cout << *(it) << " ";
    }
    cout << endl;
}

int main() {
    iteratorbegin();
    return 0;
}
