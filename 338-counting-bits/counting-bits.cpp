class Solution {
public:
    vector<int> countBits(int n) {
        vector<int> ans(n+1);

        for(int i=1; i<=n; i++){
            if(i % 2 == 0){
                ans[i] = ans[i/2];
            }else{
                ans[i] = ans[i/2] + 1;
            }
        }
        return ans;
    }
};    

//     int solve(int x){
//         int count = 0;
        
//         while(x != 0){
//             x = x & (x-1);
//             count++;
//         }
//         return count;
//     }
//     vector<int> countBits(int n) {
//         vector<int> ans(n+1, 0);

//         for(int i=0; i<=n; i++){
//             ans[i] = solve(i);
//         }
//         return ans;
//     }
// };