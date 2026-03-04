class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int currsum = 0; int maxsum = INT_MIN;
        for ( auto val: nums) {
            currsum += val;
            maxsum = max(currsum,maxsum);
            if (currsum < 0)
            currsum = 0;
        }
        return maxsum;
    }
};
