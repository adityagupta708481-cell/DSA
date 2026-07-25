class Solution {
public:
    bool isPalindrome(string s) {
        string str="";
        for(auto temp:s){
            if(isalnum(temp)){
                str.push_back(tolower(temp));
            }
        }
        string rev_str(str.rbegin(),str.rend());
        return str==rev_str;
    }
};