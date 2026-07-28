class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        int count=0;
        unordered_map<int,int>info;
        for(int i=0;i<time.size();i++){
            int rem=time[i]%60;
            int temp=(60-rem)%60;
            count+=info[temp];
            info[rem]++;
        }
        return count;
    }
};