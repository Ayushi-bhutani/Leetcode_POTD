class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length() ){
            return false;
        }
        unordered_map<char, int> charCount;
        for(int i=0; i<s.length(); i++){
            charCount[s[i]]++;
            charCount[t[i]]--;
        }
        for(auto &count: charCount){
            if(count.second !=0){
                return false;
            }
        }
         return true;

    }
};