class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int n=nums.size();
        int cnt=0;
        vector<int>ps(n+1);
        ps[0]=nums[0];
        for(int i=1;i<n;i++){
            ps[i]=ps[i-1]+nums[i];
        }
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                int sum;
                if(i==0)sum=ps[j];
                else sum=ps[j]-ps[i-1];
                if(sum==k)cnt++;
            }
        }
        return cnt;
    }
};