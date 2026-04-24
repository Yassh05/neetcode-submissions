class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> ans;

        for(int i=0;i<nums.size();i++){
            int y = target - nums[i];
            if(ans.count(y)>0) return {ans[y],i};

            ans[nums[i]] = i;
        }
        return {};
    }
};
