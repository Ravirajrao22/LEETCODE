class Solution {
public:
    bool isPalindrome(int x) {
        long long int  r = x;
        long long int  n = 0;
        if (x<0){
            return false;
        }
        int i = 1;
        
        while(x!=0){
            long long int  mod  = x%10;
            n = (n*10)+mod;
            x= x/10;
        }
        if (r==n){
            return true;
        }
        return false;



    }
};