class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        unordered_set<int> present(nums.begin(), nums.end());

        int minval = *min_element(nums.begin(), nums.end());
        int maxval = *max_element(nums.begin(), nums.end());

        vector<int> result;

        for(int i=minval; i<=maxval; i++){
            if(!present.count(i)){
                result.push_back(i);
            }
        }
        return result;
    }
};