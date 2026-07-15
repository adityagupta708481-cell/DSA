class Solution {
public:
    bool isPalindrome(int x) {
        string s=to_string(x);
        string r="";
        for(int i=s.size()-1;i>=0;i--){
            r+=s[i];
        }
        return s==r;
        
    }
};