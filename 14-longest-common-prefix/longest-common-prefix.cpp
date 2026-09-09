class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.size() == 0) return "";

        int n = strs.size();
        sort(strs.begin(), strs.end());
        string ans;
        string first = strs.front();
        string last = strs.back();

        for(int i=0; i<first.length(); i++){
            if(first[i] != last[i]){
                break;
            }else{
                ans.push_back(first[i]);
            }
        }
        return ans;
    }
};