//Two Maps
class Solution {
public:
    bool isIsomorphic(string s, string t) {

        if(s.length() != t.length()) return false;
        
        unordered_map<char,char> smap;
        unordered_map<char,char> tmap;

        for(int i=0; i<s.length(); i++){
            
            char cs = s[i];
            char ct = t[i];

            if(smap.count(cs) && smap[cs] != ct) return false;

            if(tmap.count(ct) && tmap[ct] != cs) return false;

            smap[cs] = ct;
            tmap[ct] = cs;
        }
        return true;
    }
};


// //Index-Based
// class Solution {
// public:
//     bool isIsomorphic(string s, string t) {
//         int maps[256] = {0};
//         int mapt[256] = {0};

//         for(int i=0; i<s.size(); i++){
//             if(maps[s[i]] != mapt[t[i]]) return false;

//             maps[s[i]] = i+1;
//             mapt[t[i]] = i+1;
//         }
//         return true;
//     }
// };