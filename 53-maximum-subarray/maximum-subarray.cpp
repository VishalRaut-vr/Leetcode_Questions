class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n = nums.size();

        int current = 0;
        int maxsum = INT_MIN;

        for(int i: nums){
            current += i;
            maxsum = max(maxsum, current);

            if(current < 0){
                current = 0;
            }
        }
        return maxsum;
    }
};