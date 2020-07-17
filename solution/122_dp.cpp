/*
执行用时：8 ms, 在所有 C++ 提交中击败了52.23%的用户
内存消耗：7.6 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-ii/solution/tan-xin-suan-fa-by-liweiwei1419-2/
dp[i][j]，i表示第i天能得到的最大利润，j是否持有股票
那么
dp[i][0]=max(dp[i-1][0],dp[i-1][1]+prices[i]);
dp[i][1]=max(dp[i-1][1],dp[i-1][0]-prices[i]);
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int length=prices.size();
        if(length==0||length==1)
            return 0;
        int (*dp)[2]=new int[length][2];
        dp[0][0]=0;
        dp[0][1]=-prices[0];
        for(int i=1;i<length;i++){
            dp[i][0]=max(dp[i-1][0],dp[i-1][1]+prices[i]);
            dp[i][1]=max(dp[i-1][1],dp[i-1][0]-prices[i]);
        }
        return dp[length-1][0];
    }
};