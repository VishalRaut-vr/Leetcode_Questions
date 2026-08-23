class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int candidate = nums[0];
        int count = 0;

        for(auto& i: nums){
            if(i == candidate){
                count++;
            }else{
                count--;
                if(count == 0){
                    candidate = i;
                    count++;
                }
            }
        }
        return candidate;
    }
};