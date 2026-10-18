class Solution {
public:
    bool canweplace(vector<int>arr,int dist,int balls){
        int cntball=1, last=arr[0];
        for(int i=1;i<arr.size();i++){
            if(arr[i]-last>=dist){
                cntball++;
                last=arr[i];
            }
            if(cntball>=balls)return true;
        }
        return false;
    }
    int maxDistance(vector<int>& position, int m) {
        sort(position.begin(),position.end());
        int n=position.size();
        int low=1,high=position[n-1]-position[0];
        while(low<=high){
            int mid=(low+high)/2;
            if(canweplace(position,mid,m)==true){
                low=mid+1;
            }
            else high=mid-1;
        }
        return high;
    }
};