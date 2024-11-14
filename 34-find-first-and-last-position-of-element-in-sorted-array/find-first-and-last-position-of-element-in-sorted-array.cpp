class Solution {
public:
    int firstposition (vector<int>&nums, int target){
        int low = 0;
        int n = nums.size();
        int high = n-1;
        int firstposition1=-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid]==target){
                firstposition1 = mid;
                high = mid-1;
            }
            else if(nums[mid] < target){
                low = mid+1;
            }
            else{
                high = mid-1;
            }
        }
        return firstposition1;
    }
    int lastposition(vector<int>&nums, int target){
        int low=0;
        int n = nums.size();
        int high =n-1;
        int lastposition1=-1;
        while(low<=high){
            int mid = (low+high)/2;
            if(nums[mid] ==target){
                lastposition1 = mid;
                low = mid+1;
            }else if(nums[mid] < target){
                low = mid+1;
            }else{
                high = mid-1;
            }
        }
        return lastposition1;

    }
    vector<int> searchRange(vector<int>& nums, int target) {
        int first = firstposition(nums, target);
        int last = lastposition(nums, target);
        return {first, last};

    }
};