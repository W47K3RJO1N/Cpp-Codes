#include <iostream>
#include <set>
using namespace std;

int main() {
    set<int, greater<int>> s = {10, 5, 20, 15};

    for (int x : s)
        cout << x << " ";
}
