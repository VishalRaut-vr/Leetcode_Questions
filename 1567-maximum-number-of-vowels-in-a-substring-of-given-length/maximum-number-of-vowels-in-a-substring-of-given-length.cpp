/*
Story Points :

1. i = 0, j = 0 -> For two ends of our window

2. Keep counting vowel if s[j] is 'a' or 'e' or 'i' or 'o' or 'u'.

3. When you reach window of size k i.e. (j - i + 1 == k)
   3.1 update maxV
   3.2 Shift window right side (i++) but also adjust vowel count if (s[i] was a vowel)
*/

class Solution {
public:
    int maxVowels(string s, int k) {
        int n = s.length();
        int i = 0;
        int j = 0;
        int maxCount = 0;
        int count = 0;
        //lambda function
        auto isVowel = [&](char ch){
            return ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u';
        };

        while(j < n){
            if(isVowel(s[j])){
                count++;
            }
            if(j-i + 1 == k){
                maxCount = max(maxCount,count);

                if(isVowel(s[i])){
                    count--;  
                }
                i++;
            }
            j++;
        }
        return maxCount;
    }
};