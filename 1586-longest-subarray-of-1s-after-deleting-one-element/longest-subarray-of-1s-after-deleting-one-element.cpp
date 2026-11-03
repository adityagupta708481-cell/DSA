class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int zerocnt=0;
        int longest=0;
        int i=0;
        for(int j=0;j<nums.size();j++){
            zerocnt+=(nums[j]==0);
            while(zerocnt>1){
                zerocnt-=(nums[i]==0);
                i++;
            }
            longest=max(longest,j-i);
        }
        return longest;
    }
};