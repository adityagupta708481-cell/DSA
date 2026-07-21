class Solution {
public:
    vector<string> commonChars(vector<string>& words) {
        vector<int>temp(26,0);
        for(char c:words[0]){
            temp[c-'a']++;
        }
        for(int i=0;i<words.size();i++){
            vector<int>temp1(26,0);
            for(char c:words[i]){
                temp1[c-'a']++;
            }
            for(int j=0;j<26;j++){
                temp[j]=min(temp[j],temp1[j]);
            }
        }
        vector<string>common;
        for(int k=0;k<temp.size();k++){
            while(temp[k]--){
                string s(1,k+'a');
                common.push_back(s);
            }

        }
        return common;
    }
};