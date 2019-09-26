class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0)
            return false;
        long temp=0,xt=x;
        while(xt){
            temp=temp*10+xt%10;
            xt/=10;
        }
        if(temp == x)
            return true;
        return false;
    }
};
