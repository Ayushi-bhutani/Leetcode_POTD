class Solution {
public:
    int maxCount(vector<int>& arr, int n, int maxSum) {
        unordered_set<int>arrSet(arr.begin(), arr.end());
        int sum =0;
        int count =0;
        for(int i=1; i<=n ; i++){
            if(arrSet.find(i) == arrSet.end()){
                if(i+sum <= maxSum){
                    sum += i;
                    count++;
                }else{
                    break;
                }
            }
        }
        return count;
         
    }
};