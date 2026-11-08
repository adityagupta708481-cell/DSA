class Solution {
public:
    int findMaxK(vector<int>& nums) {
        unordered_set<int>st;
        int exist=-1;
        for(auto i:nums){
            int oppsite=0-i;
            if(st.find(oppsite)!=st.end()){
                exist=max(exist,abs(oppsite));
            }
            st.insert(i);
        }
        return exist;
    }
};