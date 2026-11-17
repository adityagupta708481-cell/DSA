class Solution {
public:
    bool allzero(vector<int> count) { return count == vector<int>(26, 0); }
    vector<int> findAnagrams(string s, string p) {
        int k = p.size();
        vector<int> count(26, 0);
        for (char& ch : p) {
            count[ch - 'a']++;
        }
        int i = 0, j = 0;
        int n = s.size();
        vector<int>result;
        while (j < n) {
            int idx = s[j] - 'a';
            count[idx]--;
            if (j - i + 1 == k) {
                if (allzero(count))
                    result.push_back(i);
                count[s[i] - 'a']++;
                i++;
            }
            j++;
        }
        return result;
    }
};