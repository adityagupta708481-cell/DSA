class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        vector<int>temp;
        for(int i=0;i<grid.size();i++){
            for(auto j:grid[i])temp.push_back(j);
        }
        long long n=temp.size();
        long long sn=(n*(n+1))/2;
        long long s2n=(n*(n+1)*(2*n+1))/6;
        long long s=0,s2=0;
        for(int i=0;i<n;i++){
            s+=temp[i];
            s2+=(long long)temp[i]*(long long)temp[i];
        }
        long long val1=s-sn;
        long long val2=s2-s2n;
        val2=val2/val1;
        long long x=(val1+val2)/2;
        long long y= x-val1;
        return {(int)x,(int)y};

    }
};