class Solution {
public:
    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        vector<pair<int,int>> soldiers;
        vector<int> ans;
        
        for(int i=0; i<mat.size(); i++){
            int count = 0;

            for(int j=0; j<mat[i].size(); j++){
                count += mat[i][j];
            }
            soldiers.push_back({count, i});
        }          
        sort(soldiers.begin(), soldiers.end());

        for(int i=0; i<k; i++){
            ans.push_back(soldiers[i].second);
        }
        return ans;
    }
};
