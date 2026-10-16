class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int m = matrix.size();
        int n = matrix[0].size();

        int c = n-1;
        int r = 0;

        while(r < m && c >= 0){
            if(target == matrix[r][c]){
                return true;
            }else if(target < matrix[r][c]){
                c--;
            }else{
                r++;
            }
        }
        
        return false;
    }
};