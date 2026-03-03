#include <bits/stdc++.h>
using namespace std;

int main() {

    int arr[] = {1,2,3,3,4,4};
    int n = 6;

    for(int i = 0; i < n; i++) {

        bool alreadyCounted = false;
       for(int k = 0; k < i; k++) {
            if(arr[i] == arr[k]) {
                alreadyCounted = true;
                break;
            }
        }

        if(alreadyCounted)
            continue;

        int count = 0;

        for(int j = 0; j < n; j++) {
            if(arr[i] == arr[j])
                count++;
        }

        if(count > 1)
            cout << arr[i] << " appears " << count << " times\n";
    }

    return 0;
}