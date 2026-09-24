class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        int xr = n;

        for (int i = 0; i < nums.size(); i++) {
            xr ^= i;       // XOR with index (0 to n-1)
            xr ^= nums[i]; // XOR with array element
        }
        return xr;
    }
};