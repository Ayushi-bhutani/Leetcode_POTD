class Solution {
public:
    int findmax(vector<int> &piles){
        int maxi = INT_MIN;
        int n = piles.size();
        for(int i=0; i<n; i++){
            maxi = max(piles[i], maxi);
        }
        return maxi;
    }
    long long totalhrs(vector<int>&piles, int mid){
        long long total =0;
        int n = piles.size();
        for(int i=0; i<n; i++){
            total+=ceil((double)piles[i]/ (double)mid);

        }
        return total;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low =1;
        int high= findmax(piles);
        while(low<=high){
            int mid = (low+high)/2;
            long long totalh = totalhrs(piles, mid);
            if(totalh <= h){
                high = mid-1;
            }else{
                low = mid+1;
            }
        }
        return low;
    }
};