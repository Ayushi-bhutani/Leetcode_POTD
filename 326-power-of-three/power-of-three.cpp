class Solution {
public:
    
    int const Max3PowerInt = 1162261467;
    int const MaxInt32 = 2147483647;
    bool isPowerOfThree(int n) {
        if(n<=0 || n>Max3PowerInt){
            return false;
        }
        return Max3PowerInt%n==0;

    }
};