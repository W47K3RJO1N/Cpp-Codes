#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {1, 2, 4, 5, -3};
    int largest = INT_MIN;
    int largestindex = 0;
    int size = 5;

    for (int i = 0; i < size; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
            largestindex = i;
        }
    }
    cout << "largest element is: " << largest << " and its index value is: " << largestindex << endl;
}
