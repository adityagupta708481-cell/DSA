class Solution {
public:
    vector<int>genraterow(int row){
        long long ans=1;
        vector<int>info;
        info.push_back(1);
        for(int col=1;col<row;col++){
            ans=ans*(row-col);
            ans=ans/(col);
            info.push_back(ans);
        }
        return info;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        for(int i=1;i<=numRows;i++){
            ans.push_back(genraterow(i));
        }
        return ans;
        
    }
};