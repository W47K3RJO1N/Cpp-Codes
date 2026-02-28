#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[] = {2, 3, 4, 5};
    int x;
    cout << "Enter target : ";
    cin >> x;
    bool flag = false;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] == x)
        {
            flag = true;
            break;
        }   
    }
    if(flag == true) cout << x << " is present";
    else cout << x << " is absent";
}