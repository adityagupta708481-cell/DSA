class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int n=mat.size();
        int cur_max=0;
        int cur_index=0;
        for(int i=0;i<n;i++){
            int cur_one=accumulate(mat[i].begin(),mat[i].end(),0);
            if(cur_one>cur_max){
                cur_max=cur_one;
                cur_index=i;
            }
        }
        return {cur_index,cur_max};
    }
};