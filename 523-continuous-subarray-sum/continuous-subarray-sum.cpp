class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>info;
        info[0]=-1;
        int presum=0;
        for(int i=0;i<nums.size();i++){
            presum+=nums[i];
            int temp=(presum%k);
            if(info.find(temp)!=info.end()){
                if((i-info[temp])>=2)return true;
                else continue;
            }
            else info[temp]=i;
        }
        return false;
    }
};