class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int maxi = arr[arr.size()-1];
        int curr = arr[arr.size()-1];
        arr[arr.size()-1] = -1;
        for(int i=arr.size()-2; i>=0; i--){
            curr = arr[i];
            arr[i] = maxi;
            maxi = max(maxi, curr);
        }
        return arr;
    }
};