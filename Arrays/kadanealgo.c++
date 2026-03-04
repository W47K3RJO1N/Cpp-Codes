#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> vec = {3,-4,5,4,-1,7,-8};
    int currsum = 0; int maxsum = INT_MIN;
    for (auto val : vec) {
        currsum += val;
        maxsum = max(currsum,maxsum);
        if(currsum < 0) 
        currsum = 0;
    }
cout << "Maximum subarray sum: " << maxsum;
return 0;

}