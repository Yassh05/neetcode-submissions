class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
        unordered_map<int,int> ans;
        for(int x : nums){
            ans[x]++;

            if(ans[x]> n/2) return x; 
        }
        return nums[0];
    }
};