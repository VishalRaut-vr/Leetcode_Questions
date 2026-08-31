class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int count = 1;
        string repeated = a;
        
        // Keep repeating until length >= b.length()
        while (repeated.length() < b.length()) {
            repeated += a;
            count++;
        }
        
        // Check if b is substring
        if (repeated.find(b) != string::npos) 
            return count;
        
        // Check one more time (edge case)
        repeated += a;
        count++;
        if (repeated.find(b) != string::npos) 
            return count;
        
        return -1;
    }
};