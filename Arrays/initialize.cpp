#include<bits/stdc++.h>
using namespace std;

int main() {
    int arr[] = {2 , 4, 5 ,9, 93, 9,78,37,45,67,90,33,22,67,78};
    cout << sizeof(arr) << " ";
    cout << endl;
    int n = sizeof(arr)/sizeof(int); 
    
    for(int i = 0 ; i <= n-1 ; i++ ) {
        cout << arr[i] << " ";
    }
}