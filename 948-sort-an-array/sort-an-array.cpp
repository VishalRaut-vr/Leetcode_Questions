class Solution {
public:

    void mergesort(vector<int>& nums, int l, int r) {
        if(l >= r) return;

        int m = (l+r)/2;
        
        mergesort(nums, l, m);
        mergesort(nums, m+1, r);

        vector<int> temp;
        int i = l, j = m+1;

        while(i <= m && j <= r){
            if(nums[i] < nums[j]){
                temp.push_back(nums[i++]);
                
            }else{
                temp.push_back(nums[j++]);
                
            }
        }

        while(i <= m){
            temp.push_back(nums[i++]);
            
        }
        while(j <= r){
            temp.push_back(nums[j++]);
        }

        for(int k=l; k<=r; k++){
            nums[k] = temp[k-l];
        }
    }

    vector<int> sortArray(vector<int>& nums) {
        mergesort(nums, 0, nums.size()-1);

        return nums;
    }
};
