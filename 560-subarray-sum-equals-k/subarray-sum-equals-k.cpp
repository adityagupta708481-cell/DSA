class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>info;
        info[0]=1;
        int presum=0,cnt=0;
        for(int i=0;i<nums.size();i++){
            presum+=nums[i];
            int temp=presum-k;
            cnt+=info[temp];
            info[presum]+=1;
        }
        return cnt;
    }
};