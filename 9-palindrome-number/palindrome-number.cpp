class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)return false;
        long r=0,s=x;
        while(s){
            r=r*10+s%10;
            s/=10;
        }
        return x==r;
        
    }
};