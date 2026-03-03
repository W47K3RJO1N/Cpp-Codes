#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {1,2,3,4,4,4,5,5,5,5};
    int n = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < n; i++) {

        bool alreadyPrinted = false;

        for(int k = 0; k < i; k++) {
            if(arr[k] == arr[i]) {
                alreadyPrinted = true;
                break;
            }
        }

        if(alreadyPrinted)
            continue;

        for (int j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                cout << arr[i] << " ";
                break;
            }
        }
    }

    return 0;
}