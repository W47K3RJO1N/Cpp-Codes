#include <bits/stdc++.h>
using namespace std;

void uniquevalues(int arr[], int n)
{
    for(int i = 0; i < n; i++)
    {
        bool isUnique = true;

        for(int j = 0; j < n; j++)
        {
            if(i != j && arr[i] == arr[j])
            {
                isUnique = false;
                break;
            }
        }

        if(isUnique)
            cout << arr[i] << " ";
    }
}

int main()
{
    int arr[] = {1,2,2,3,4,4,5};
    int n = 7;

    uniquevalues(arr, n);

    return 0;
}