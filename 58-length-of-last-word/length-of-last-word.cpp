class Solution {
public:
    int lengthOfLastWord(string s) {
        int i=0,j=0;
        int last_word=0;
        while(j<=s.length()){
            if(i<s.length()&&s[i]==' '){
                i++;
            }
            else if(j==s.length()||s[j]==' '){
                if(j>i)last_word=j-i;
                i=j+1;
            }
            j++;
        }
        return last_word;
    }
};