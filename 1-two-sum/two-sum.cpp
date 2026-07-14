class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
     unordered_map<int,int>nmap;
     for(int i=0;i<nums.size();i++){
        int com=target-nums[i];
        if(nmap.find(com)!=nmap.end()){
            return{nmap[com],i};
        }
        nmap[nums[i]]=i;
     }
     return{};
    }
};