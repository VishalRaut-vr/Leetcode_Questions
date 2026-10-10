class Solution {
public:
    vector<int> findEvenNumbers(vector<int>& digits) {
        
        vector<int> ans;
        vector<int> mp(10,0);

        for(int& i: digits){
            mp[i]++;
        }

        for(int i=1; i<10; i++){
            if(mp[i] == 0) continue;
            mp[i]--;

            for(int j=0; j<10; j++){
                if(mp[j] == 0) continue;
                mp[j]--;

                for(int k=0; k<=8; k+=2){
                    if(mp[k] == 0) continue;
                    mp[k]--;

                    int num = i*100 + j*10 + k;
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