class Solution {
public:
    string minWindow(string s, string t) {

        if(t.length() > s.length()) return "";

        unordered_map<char,int> m;

        for(char&ch: t){
            m[ch]++;
        }

        int i = 0, j = 0, start_i = 0;
        int reqcount = t.length();
        int minwin = INT_MAX;

        while(j < s.length()){
            char ch = s[j];

            if(m[ch] > 0){
                reqcount--;
            }
            m[ch]--;

            while(reqcount == 0){
                int curr = j-i+1;
                if(minwin > curr){
                    minwin = curr;
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
        return minwin == INT_MAX? "" : s.substr(start_i, minwin);
    }
};