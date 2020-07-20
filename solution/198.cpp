/*
执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
内存消耗：7.8 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
动态规划，令dp[i]表示前i家进行偷窃的最大收益
dp[i]=max(dp[i-1],dp[i-2]+nums[i])
这时发现其实只需要用到两个数据：dp[i-1]和dp[i-2]
为了节省空间，可以直接用两个int表示，而不是用数组
*/

class Solution {
public:
    int rob(vector<int>& nums) {
        int length=nums.size();
        int first,second;
        if (length==0)
            return 0;
        if (length==1)
            return nums[0];
        if (length==2)
            return max(nums[0],nums[1]);
        first=nums[0];
        second=max(nums[0],nums[1]);
        for(int i=2;i<length;i++){
            int temp=second;
            second=max(second,first+nums[i]);
            first=temp;
        }
        return second;
    }
};