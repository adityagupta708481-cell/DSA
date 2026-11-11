class Solution {
public:
    int binary(vector<int>arr){
        sort(arr.begin(),arr.end());
        int n=arr.size();
        int low=0,high=n-1;
        int ans=n;
        while(low<=high){
            int mid=(low+high)/2;
            if(arr[mid]>=1){
                ans=mid;
                high=mid-1;
            }
            else low=mid+1;
        }
        return ans;
    }
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int s=mat.size();
        int cur_max=0;
        int cur_index=0;
        for(int i=0;i<s;i++){
            int cur_one=mat[i].size()-binary(mat[i]);
            if(cur_one>cur_max){
                cur_max=cur_one;
                cur_index=i;
            }
        }
        return {cur_index,cur_max};
    }
};