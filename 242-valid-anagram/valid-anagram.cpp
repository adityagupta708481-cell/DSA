class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int>info;
        if(s.length()!=t.length())return false;
        for(auto i:s){
            info[i]++;
        }
        for(auto i:t){
            if(info.find(i)!=info.end())info[i]--;
        }
        for(auto j:info){
            if(j.second!=0)return false;
        }
        return true;
    }
};