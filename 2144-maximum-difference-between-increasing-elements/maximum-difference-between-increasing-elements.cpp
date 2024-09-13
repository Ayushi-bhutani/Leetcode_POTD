class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int minvalue=nums[0];
        int maxdiff =0;
        for(int i=1; i<nums.size(); i++){
            if(nums[i] < minvalue){
                minvalue = nums[i];
            }
            else if(maxdiff < nums[i]-minvalue){
                maxdiff = nums[i]-minvalue;
            }
        }
        if(!maxdiff){
            return -1;
        }
        return maxdiff;
    }
};