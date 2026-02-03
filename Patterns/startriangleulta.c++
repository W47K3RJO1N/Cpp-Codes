/*
****
***
**
*
*/

#include <bits/stdc++.h>
using namespace std;

void startriangleulta(int n) {
    for (int i = 1 ; i <= n; i++){
        for (int j = 1; j <= n + 1 - i ; j++) {

            cout << "* ";
        }
        cout << endl;
    }
}

int main(){
   int n;
   cin >> n;
    startriangleulta(n);
    return 0;
}