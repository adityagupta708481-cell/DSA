class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        sort(strs.begin(), strs.end());
        vector<string> temp;
        for (auto i : strs) {
            sort(i.begin(), i.end());
            temp.push_back(i);
        }
        
        vector<vector<string>> info1;
        vector<bool> visited(strs.size(), false);
        
        for (int i = 0; i < temp.size(); i++) {
            if (visited[i]) continue;
            
            vector<string> info;
            info.push_back(strs[i]);
            visited[i] = true;
            
            string temp1 = temp[i];
            for (int j = i + 1; j < temp.size(); j++) {
                if (temp1 == temp[j]) {
                    info.push_back(strs[j]);
                    visited[j] = true;
                }
            }
            info1.push_back(info);
        }
        return info1;
    }
};