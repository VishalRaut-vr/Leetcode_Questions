class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        bool present[101] = {false};

        int minval = INT_MAX;
        int maxval = INT_MIN;

        for(int num: nums){
            present[num] = true;
            minval = min(minval, num);
            maxval = max(maxval, num);
        }

        vector<int> result;

        for(int i=minval; i<=maxval; i++){
            if(!present[i]){
                result.push_back(i);
            }
        }
        return result;
    }

};