class Solution {
public:
    string reverseWords(string s) {
        stack<string> st;
        string result ;
        int n = s.size();
        int start =0;
        for(int i=0; i<=n; i++){
            if(i==n || s[i]==' '){
                string word = s.substr(start, i- start);
                if(!word.empty()){
                    st.push(word);
                }
                start = i+1;
            }  


        }
        while(!st.empty()){
            result += st.top();
            st.pop();
            if(!st.empty()){
                result += " ";
            }
        }
        return result;
    }
};