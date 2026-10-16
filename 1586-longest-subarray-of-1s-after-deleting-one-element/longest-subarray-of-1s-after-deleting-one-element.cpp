class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int i = 0, j = 0;
        int lastzero = -1;
        int result = 0;

        while(j < nums.size()){
            if(nums[j] == 0){
                i = lastzero + 1;
                lastzero = j;
            }
            result = max(result, j - i);
            j++;
        }
        return result;
    }
};