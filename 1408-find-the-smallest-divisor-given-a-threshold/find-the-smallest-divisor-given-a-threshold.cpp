class Solution {
public:
    bool can(vector<int>&nums, int threshold, int div){
        int sum =0;
        for(auto i: nums){
            sum += ceil(i/(double)div);
        }
        return sum <= threshold;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int l =1, r= 1e6, ans =0;
        while(l<=r){
            int mid = (l+r)/2;
            if(can(nums, threshold, mid)){
                ans = mid;
                r = mid-1;
            }
            else{
                l = mid+1;
            }
        }
        return ans;
    }
};