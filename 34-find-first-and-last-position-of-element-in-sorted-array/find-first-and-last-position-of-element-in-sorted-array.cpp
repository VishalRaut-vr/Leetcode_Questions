class Solution {
public:
    // for first position
    int firstpos(vector<int>& nums, int target){
        int left = 0; 
        int right = nums.size()-1;
        int ans = -1;

        while(left <= right){
            int mid = left + (right-left)/2;

            if(nums[mid] == target){
                ans = mid;
                right = mid-1; //keep searching on left side for first pos
            }else if(nums[mid] < target){
                left = mid + 1;
            }else{
                right = mid-1;
            }
        }
        return ans;
    }
    // for last position
    int lastpos(vector<int>& nums, int target){
        int left = 0; 
        int right = nums.size()-1;
        int ans = -1;

        while(left <= right){
            int mid = left + (right-left)/2;

            if(nums[mid] == target){
                ans = mid;
                left = mid+1; // keep searching on right side for last pos
            }else if(nums[mid] < target){
                left = mid+1;
            }else{
                right = mid-1;
            }
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        if(nums.empty()) return {-1,-1};

        int first = firstpos(nums, target);
        int last = lastpos(nums, target);

        return {first, last};
    }
};