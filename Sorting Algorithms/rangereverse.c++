#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> p = {1, 8, 3, 2};

    reverse(p.begin() + 1, p.begin() + 2);

    for (int val : p) {
        cout << val << " ";

    }
    cout << endl;
    return 0;
}
