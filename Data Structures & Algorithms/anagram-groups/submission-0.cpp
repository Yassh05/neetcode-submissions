class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string,vector<string>> ans;
        vector<vector<string>> ans1;
        for(string x :strs){
            string y = x;
            sort(y.begin(),y.end());
            ans[y].push_back(x);
        }
        for(auto&z : ans){
                ans1.push_back(z.second);
        }
        return ans1;
    }
};
