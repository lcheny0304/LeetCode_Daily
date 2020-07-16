/*
执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
内存消耗：5.9 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
简单dp。
dp[i]代表爬到i层可以有的方案数，dp[i]=dp[i-1]+dp[i-2]。
一开始用了vector但是非常耗时，后来决定空间换时间用int数组结果内存占用反而更少了，迷惑。。。
*/

class Solution {
public:
    int climbStairs(int n) {
        const int maxn=10010;
        int dp[maxn]={0};
        dp[0]=0,dp[1]=1,dp[2]=2;
        if(n<=2)
            return dp[n];
        for(int i=3;i<=n;i++){
            dp[i]=dp[i-1]+dp[i-2];
        }
        return dp[n];
    }
};