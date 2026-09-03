class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        long total=accumulate(nums.begin(),nums.end(),0L);
        long px=0,sx=0;
        for(int i=0;i<nums.size();i++){
            sx=total-px-nums[i];
            if(px==sx)return i;
            px+=nums[i];
        }
        return -1;
    }
};