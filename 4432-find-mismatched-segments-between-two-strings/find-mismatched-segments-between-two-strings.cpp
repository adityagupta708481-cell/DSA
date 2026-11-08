class Solution {
public:
    vector<vector<string>> findMismatchedSegments(string s1, string s2) {
        vector<vector<string>> ans;
        int i = 0;
        string a = "", b = ""; 
        while (i < s1.size()) {
            if (s1[i] == s2[i]) {
                if (a.length() != 0 && b.length() != 0) {
                    ans.push_back({a, b});
                    a = "", b = "";
                }
            } else {
                a += s1[i], b += s2[i];
            }
            i++;
        }
        if (a.length() != 0)
            ans.push_back({a, b}); 
        return ans;
    }
};