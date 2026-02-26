#include <bits/stdc++.h>
using namespace std;

void printArr(int arr[], int n, int i) {
    if (i == n) return;
    cout << arr[i] << " ";
    printArr(arr, n, i + 1);
}

int main() {
    int arr[] = {1, 2, 3, 4};
    printArr(arr, 4, 0);
}
