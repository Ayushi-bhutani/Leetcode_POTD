class Solution {
public:
    bool isPalindrome(int x) {
        int ans=0;
        int org=x;
        if(x<0)
        {
            return false;
        }
        while(x!=0){
            int a = x%10;
            if((ans>INT_MAX/10 || ans<INT_MIN/10)){
                return 0;
            }
            ans = ans*10 +a;
            x=x/10; 
 
        }
        if(ans==org){
            return true;
        }else{
            return false;
        }
    }
};