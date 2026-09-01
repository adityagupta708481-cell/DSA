class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        unordered_map<int,int>mp;
        mp[0]=-1;
        int len=0,sum=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==0)sum+=-1;
            if(nums[i]==1)sum+=1;
            if(mp.find(sum)!=mp.end()){
                int temp=i-mp[sum];
                len=max(len,temp);
            }
            else{
                mp[sum]=i;
            }
        }
        return len;
        
    }
};