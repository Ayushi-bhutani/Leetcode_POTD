class Solution {
public:
    string addSpaces(string s, vector<int>& spaces) {
        int n = spaces.size();
        string str ="";
        int start =0;
        for(int i=0; i<n; i++){
            str += s.substr(start, spaces[i]-start);
            str += " ";
            start = spaces[i];


        }
        str += s.substr(start, s.size()-start+1);
        return str;
    }
};