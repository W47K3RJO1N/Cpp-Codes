#include <bits/stdc++.h>
using namespace std;

int main () {
    int arr[] = {1,2,4,5,-3};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallerindex = 0;
    int largestindex =0;
    int size = 5;

    for (int i = 0; i < size; i++) {
       if( arr[i] < smallest) {
          smallest = arr[i];
          smallerindex = i;

    }
    cout << "smallest "<< smallest <<" and its index is: " << smallerindex << endl;

}
}