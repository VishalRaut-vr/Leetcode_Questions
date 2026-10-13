class Solution {
public:
    int maxProductDifference(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        int n = nums.size();

        int a = nums[n-1]; //largest number
        int b = nums[n-2]; //second largest number

        int c = nums[0]; //smallest number
        int d = nums[1]; //second smallest

        int ans = (a * b) - (c * d); //formula

        return ans;
    }
};