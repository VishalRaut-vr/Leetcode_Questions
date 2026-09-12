class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {

        vector<int> ans;
        vector<int> mp(10, 0);

        for(int& i: digits){
            mp[i]++;
        }

        for (int i = 1; i <= 9; i++) {
            if (mp[i] == 0)
                continue;
            mp[i]--;

            for (int j = 0; j <= 9; j++) {
                if (mp[j] == 0)
                    continue;
                mp[j]--;

                for (int k = 0; k <= 8; k += 2) {
                    if (mp[k] == 0)
                        continue;
                    mp[k]--;

                    int num = i * 100 + j * 10 + k;
                    
                    ans.push_back(num);
                    mp[k]++;
                }
                mp[j]++;
            }
            mp[i]++;
        }
        return ans;
    }
};

// class Solution {
// public:
//     vector<int> findEvenNumbers(vector<int>& digits) {
//         int n = digits.size();

//         unordered_set<int> st;

//         for(int i=0; i<n; i++){
//             for(int j=0; j<n; j++){
//                 for(int k=0; k<n; k++){

//                     if(i == j || j == k || i == k){
//                         continue;
//                     }

//                     int num = digits[i]*100 + digits[j]*10 + digits[k];

//                     if(num >= 100 && num%2 == 0){
//                         st.insert(num);
//                     }
//                 }
//             }
//         }
//         vector<int> ans(begin(st), end(st));
//         sort(ans.begin(), ans.end());

//         return ans;
//     }
// };