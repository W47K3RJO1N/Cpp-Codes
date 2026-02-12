#include <bits/stdc++.h>
using namespace std;

int main(){
    int a, b;

    cout << "Enter Two numbers" << endl;
    cin >> a >> b;

    int temp = a;
    a = b;
     b = temp;

    cout << "After Swapping\n";
    cout << "A = " << a << endl;
    cout << "B = " << b;

    return 0;
}