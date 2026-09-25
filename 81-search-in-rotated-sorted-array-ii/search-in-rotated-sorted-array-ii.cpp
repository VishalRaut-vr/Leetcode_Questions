class Solution {
public:
    bool search(vector<int>& nums, int target) {
        int left = 0;
        int right = nums.size()-1;
        sort(nums.begin(), nums.end());
        while(left <= right){
            int mid = left + (right-left)/2;

            if(nums[mid] == target){
                return true;
            }

            //left sorted
            if(nums[left] <= nums[mid]){
                if(nums[left] <= target && target <= nums[mid]){
                    right = mid-1;
                }else{
                    left = mid+1;
                }
            }else{  // right sorted array
                if(nums[mid] <= target && target <= nums[right]){
                    left = mid+1;
                }else{
                    right = mid-1;
                }
            }
        }
        return false;
    }
};