class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_map<int,int>mp;
        int exist=-1;
        for(auto i:nums){
            int oppsite=0-i;
            if(mp.find(oppsite)!=mp.end()){
                exist=max(exist,abs(oppsite));
            }
            mp[i]=oppsite;
        }
        return exist;
    }
};