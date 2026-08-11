class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int n=nums.size();
        int count=0;
        for(auto i:nums){
            if(i==nums[n/2])count++;
        }
        if(count>(n/2))return nums[n/2];
        return -1;
    }
};