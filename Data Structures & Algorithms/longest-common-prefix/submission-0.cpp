class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string x = strs[0];

        for(auto& y: strs){
                while(y.find(x)!=0)
                x.pop_back();
        }
        return x;
    }
};