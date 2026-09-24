class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        // Find first index where nums[i] >= target
        auto first = lower_bound(nums.begin(), nums.end(), target);
        // Type: vector<int>::iterator (deduced by auto)
        // Points to first element >= target (or end if none)
        
        // Find first index where nums[i] > target
        auto last = upper_bound(nums.begin(), nums.end(), target);
        // Type: vector<int>::iterator
        // Points to first element > target (or end if none)
        
        // Check if target exists
        if(first == nums.end() || *first != target){
            // first == end → target > all elements
            // *first != target → first element >= target is not target
            return {-1, -1};
        }
        
        // Calculate indices using iterator arithmetic
        // first - nums.begin() = index of first occurrence
        // last - nums.begin() - 1 = index of last occurrence
        // (int) cast to avoid narrowing warning
        return {(int)(first - nums.begin()), (int)(last - nums.begin() - 1)};
    }
};