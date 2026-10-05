class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);   // Base score = 0
        
        for(char ch : s){
            if(ch == '('){
                st.push(0);   // Start a new "level" with score 0
            } else {
                int top = st.top();
                st.pop();
                
                // Compute contribution of this "()" pair
                int val = max(2 * top, 1);
                
                // Add to the parent level
                st.top() += val;
            }
        }
        return st.top();
    }
};