class Solution {
public:
      
    int beautySum(string s) {
        int ans = 0; 
         
        for(int i=0; i<s.length(); i++){
            map<char, int> mp;
            for(int j=i; j<s.length(); j++){
                mp[s[j]]++;
                int lf = INT_MAX;
                int mf = 0;
                for(auto &it: mp){
                    lf = min(lf, it.second);
                    mf = max(mf, it.second);
                }

                ans += (mf-lf);

            }
        }
        return ans;
    }
};