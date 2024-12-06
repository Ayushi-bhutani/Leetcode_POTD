class Solution {
public:
    int maxCount(vector<int>& arr, int n, int maxSum) {
        vector<int> ans;
        for(int i=1; i<=n; i++){
            if( find(arr.begin(), arr.end(), i)==arr.end()){
                ans.push_back(i);
            }


        }
        sort(ans.begin(), ans.end());
        int sum=0;
        int count =0;
        for(int i=0; i<ans.size(); i++){
            if(sum + ans[i] <= maxSum){
                sum += ans[i];
                count++;
            }else{
                break;
            }
            
        }
        return count;
         
    }
};