class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        map<string, vector<string>> mp;
        for(int i = 0; i < strs.size(); i++) {
            string s2 = strs[i];
            sort(s2.begin(), s2.end());
            mp[s2].push_back(strs[i]);
        }
        vector<vector<string>>info;
        auto it = mp.begin();
        while(it != mp.end()) {
            info.push_back(it->second);
            it++;
        }
        return info;
    }
};