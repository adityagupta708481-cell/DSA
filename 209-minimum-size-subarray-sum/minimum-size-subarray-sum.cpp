class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i=0,j=0;
        long long ps=0;
        int mini=INT_MAX;
        while(j<nums.size()){
            ps+=nums[j];
            while(ps>=target){
                mini=min(mini,j-i+1);
                ps-=nums[i];
                i++;
            }
            j++;
        }
        return (mini==INT_MAX)?0:mini;
    }
};