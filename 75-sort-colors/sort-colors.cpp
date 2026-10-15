class Solution {
public:
    void sortColors(vector<int>& nums) {
        int n=nums.size();
        int i=0,j=1;
        while(i<n-1){
            if(nums[j]<=nums[i]){
                swap(nums[i],nums[j]);
            }
            if(j==n-1){
                i++;
                j=i+1;
            }
            else j++;
        }
    }
};