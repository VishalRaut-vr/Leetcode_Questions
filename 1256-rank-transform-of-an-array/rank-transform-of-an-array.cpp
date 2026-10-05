class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        // Step 1: Copy and sort unique values
        vector<int> sorted = arr;
        sort(sorted.begin(), sorted.end());
        sorted.erase(unique(sorted.begin(), sorted.end()), sorted.end());
        
        // Step 2: Build rank map
        unordered_map<int, int> rank;
        for(int i = 0; i < sorted.size(); i++){
            rank[sorted[i]] = i + 1;   // Rank starts at 1
        }
        
        // Step 3: Replace each element with its rank
        vector<int> result;
        for(int num : arr){
            result.push_back(rank[num]);
        }
        
        return result;
    }
};