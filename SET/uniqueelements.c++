#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1, 2, 2, 3, 4, 4, 5};
    int n = 7;

    set<int> s(arr, arr + n);

    cout << "Unique elements: " << s.size();
}
