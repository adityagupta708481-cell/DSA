class Solution {
public:
    int arrangeCoins(int n) {
        int cnt=0;
        int coins=1;
        while(n>=coins){
            cnt++;
            n=n-coins;
            coins++;
        }
        return cnt;
    }
};