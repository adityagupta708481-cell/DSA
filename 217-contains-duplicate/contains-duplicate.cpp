class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_map<int, int> info;
        for (auto i : nums) {
            info[i]++;
        }
        for(auto j:info){
            if(j.second>1)return true;
        }
        return false;
    }
};