class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       sort(nums.begin(),nums.end());
       int cur=0,longest=0,lastsmall=INT_MIN;
       for(auto i:nums){
        if(i-1==lastsmall){
            cur+=1;
            lastsmall=i;
        }
        else if(i!=lastsmall){
            cur=1;
            lastsmall=i;
        }
        longest=max(longest,cur);
       }
       return longest;
    }
};