class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        int start =0;
        int n = s.size();
        string result;
        for(int i=0; i<n; i++){
            if(s[i] == '('){
                st.push('(');
            }else{
                st.pop();
            }
            if(st.empty()){
                result += s.substr(start+1, i-start-1);
                start = i+1;
            }

        }
        return result;
    }
};