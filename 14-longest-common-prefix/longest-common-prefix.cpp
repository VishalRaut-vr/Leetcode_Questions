class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        
        if(strs.empty()) return "";

        int n = strs.size();
        sort(strs.begin(), strs.end());

        string result;

        string first = strs.front();
        string last = strs.back();

        for(int i=0; i<last.size(); i++){
            if(first[i] != last[i]){
                break;
            }else{
                result.push_back(first[i]);
            }
        }
        return result;
    }
};