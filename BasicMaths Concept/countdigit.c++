#include <bits/stdc++.h>
using namespace std;

int main() {

    int n;
    cout << "enter a number: " << " ";
    cin >> n;
    int cnt = (int)(log10(n) + 1);
    cout << "Number of digits: " << cnt;
    return cnt;
}

// TIME COMPLEXITY = O (LOG10 (n))
