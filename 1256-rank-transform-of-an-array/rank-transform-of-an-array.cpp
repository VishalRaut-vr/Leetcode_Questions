class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());

        sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());

        vector<int> ans;
        ans.reserve(arr.size());

        // using binary search
        for (int num : arr) {
            int rank = lower_bound(sorted.begin(), sorted.end(), num) -
                       sorted.begin() + 1;

            ans.push_back(rank);
        }
        return ans;
    }
};