class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxcount = 0;

        unordered_set<int> st;
        int left = 0;

        for(int right=0; right<s.length(); right++){
            while(st.find(s[right]) != st.end()){
                st.erase(s[left]);
                left++;
            }
            st.insert(s[right]);
            maxcount = max(maxcount, right-left+1);
        }
        return maxcount;
    }
};