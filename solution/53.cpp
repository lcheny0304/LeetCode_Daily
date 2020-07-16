/*
执行用时：8 ms, 在所有 C++ 提交中击败了60.32%的用户
内存消耗：7.4 MB, 在所有 C++ 提交中击败了100.00%的用户
*/

class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        vector<int> dp;
        dp.push_back(nums[0]);
        int ans=nums[0];
        for(int i=1;i<nums.size();i++){
            if(dp[i-1]<0)
                dp.push_back(nums[i]);
            else{
                dp.push_back(dp[i-1]+nums[i]);
            }
            ans=max(dp[i],ans);
        }
        return ans;
    }
};