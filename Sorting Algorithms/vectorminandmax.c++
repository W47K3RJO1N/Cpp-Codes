#include <bits/stdc++.h>
using namespace std;

int main()
{

    vector<int> p = {1, 8, 3, 2};

    cout << *(max_element(p.begin(), p.end())) << endl;
    cout << *(min_element(p.begin(), p.end())) << endl;
    return 0;
}