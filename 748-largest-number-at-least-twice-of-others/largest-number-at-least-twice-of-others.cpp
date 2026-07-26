class Solution {
public:
    int dominantIndex(vector<int>& nums) {
        int n=*max_element(nums.begin(),nums.end());
        int ind=-1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==n)ind=i;
            else if(nums[i]*2>n&&nums[i]!=n)return -1;
        }
        return ind;
        
    }
};