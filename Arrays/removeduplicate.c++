#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = { 1,2,3,3,4,4};
    int n = 6;

    for (int i = 0; i < n; i++){
        bool isduplicate = false;

        for (int j = 0; j < n; j++ ) {
            if (arr[i] == arr[j] && i != j) {
                isduplicate = true;
                break;
            }
        }

        if(!isduplicate) cout << arr[i] << " ";
    }
    return 0;

}
