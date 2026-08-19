class Solution {
public:
    string defangIPaddr(string address) {
        string temp="";
        for(auto i:address){
            if(i=='.')temp+="[.]";
            else temp+=i;
        }
        return temp;
    }
};