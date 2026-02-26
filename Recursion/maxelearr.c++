#include <bits/stdc++.h>
using namespace std;

int maxElement(int arr[], int n) {
    if (n == 1) return arr[0];
    return max(arr[n - 1], maxElement(arr, n - 1));
}

int main() {
    int arr[] = {3, 7, 2, 9, 5};
    cout << maxElement(arr, 5);
}
