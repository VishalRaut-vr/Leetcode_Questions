class Solution {
public:
    int repeatedStringMatch(string a, string b) {
        int count = 1;
        string repeated = a;

        while(repeated.length() < b.length()){
            repeated += a;
            count++;
        }

        while(repeated.find(b) != string:: npos){
            return count;
        }

        repeated += a;
        count++;

        while(repeated.find(b) != string:: npos){
            return count;
        }
        return -1;
    }
};