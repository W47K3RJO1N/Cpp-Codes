#include <bits/stdc++.h>
using namespace std;

int main()
{

    int n;
    cin >> n;
    int dup = n;
    int sum = 0;

    while (n > 0)
    {
        int last_digit = n % 10;

        n = n / 10;
        sum = sum + (last_digit * last_digit * last_digit);

        cout << sum;
    }
    if (dup == sum)
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }
    return 0;
}
