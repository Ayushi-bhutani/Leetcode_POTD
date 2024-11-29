class Solution {
public:
    int maxDepth(string s) {
        int curr_depth =0;
        int max_depth=0;
        for(char c:s){
            if(c=='('){
                curr_depth++;
                max_depth = max(max_depth, curr_depth);
            }else if(c==')'){
                curr_depth--;
            }
        }
        return max_depth;
    }
};