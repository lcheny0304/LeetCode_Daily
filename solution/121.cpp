/*
执行用时：12 ms, 在所有 C++ 提交中击败了75.68%的用户
内存消耗：13.5 MB, 在所有 C++ 提交中击败了6.56%的用户

思路：
简单dp
*/
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        vector<int> dp_min; //dp[i]表示第i天和第i天之前的最小价格
        vector<int> dp_max; //dp[j]表示第j天和第j天之后的最大价格
        int ans=0; //ans=max(ans,dp[j+1]-dp[j]);
        int length=prices.size();
        if(length==0||length==1) 
            return 0;
        dp_min.push_back(prices[0]);
        dp_max.push_back(prices[length-1]);
        for(int i=1,j=length-2;j>=0;i++,j--){
            dp_min.push_back(min(prices[i],dp_min[i-1]));
            dp_max.push_back(max(prices[j],dp_max[i-1]));
        }
        reverse(dp_max.begin(),dp_max.end());
        for(int i=1;i<length;i++)
            ans=max(ans,dp_max[i]-dp_min[i-1]);
        return ans;
    }
};