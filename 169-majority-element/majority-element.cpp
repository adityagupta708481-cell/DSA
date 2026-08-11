class Solution {
public:
    int majorityElement(vector<int>& nums) {
        unordered_map<int,int>info;
        for(auto i:nums){
            info[i]++;
        }
        int maximum=INT_MIN;
        int num;
        for(auto i:nums){
            if(info[i]>maximum){
                maximum=info[i];
                num=i;
            }
        }
        if(maximum>(nums.size()/2))return num;
        return-1;
    }
};