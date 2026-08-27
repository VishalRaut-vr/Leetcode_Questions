class Solution {
public:
    string minWindow(string s, string t) {

        if(t.size() > s.size()) return "";

        unordered_map<char,int> m;

        for(char& ch: t){
            m[ch]++;
        }
        int i = 0, j = 0, start_i = 0;
        int reqcount = t.size();
        int minwindow = INT_MAX;

        while(j < s.size()){
            char ch = s[j];

            if(m[ch] > 0){
                reqcount--;
            }
            m[ch]--;

            while(reqcount == 0){
                int curr = j - i + 1;
                if(minwindow > curr){
                    minwindow = curr;
                    start_i = i;

                }
                m[s[i]]++;

                if(m[s[i]] > 0){
                    reqcount++;
                }
                i++;
            }
            j++;
        }
        return minwindow == INT_MAX ? "" : s.substr(start_i, minwindow);
    }
};