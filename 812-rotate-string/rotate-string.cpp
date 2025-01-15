class Solution {
public:
    bool rotateString(string s, string goal) {
        string neww = s+s;
        if(s.length() != goal.length()){
            return false;
        }
        return neww.find(goal) != string::npos;
    }
};