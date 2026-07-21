class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maxi=0, left=0, right=1;
        while(right<prices.size()){
            if(prices[right]>prices[left]){
                maxi=max(maxi,prices[right]-prices[left]);
            }
            else if(prices[left]>=prices[right]){
                left=right;
            }
            right++;
        }
        return maxi;
    }
};