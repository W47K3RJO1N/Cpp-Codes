#include <iostream>
#include <set>
using namespace std;

int main() {
    int arr[] = {4, 2, 2, 1, 3, 3};
    int n = 6;

    set<int> s(arr, arr + n);

    for (int x : s)
        cout << x << " ";
}
