#include <bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {1,2,3,4,5};
    int n = 5;
    int maxindex = 0;
    int minindex = 0;


    for (int i = 0; i < n ; i++) {
        if (arr[i] > arr[maxindex]) 
         maxindex = i;

         if (arr[i] < arr[minindex])
         minindex = i;
    }

    swap(arr[maxindex],arr[minindex]);

    for (int i = 0; i < n; i++){
        cout << arr[i] << " ";
    }
    // cout << maxindex << endl;
    // cout << minindex << endl;
    return 0;
    
}
