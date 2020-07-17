/*
执行用时：4 ms, 在所有 C++ 提交中击败了94.37%的用户
内存消耗：7.2 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
就是找到数组中的连续上涨子序列，然后加上每一个子序列的尾减去头的值
https://leetcode-cn.com/problems/best-time-to-buy-and-sell-stock-ii/solution/best-time-to-buy-and-sell-stock-ii-zhuan-hua-fa-ji/
不过想想其实也不用那么复杂，只要前一个的值小于后一个，那加上它俩的差就行了
*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int length=prices.size();
        if(length==0||length==1)
            return 0;
        int ans=0;
        int s=0,e=1;
        while(e<length){
            if(prices[e]>=prices[e-1]){
                e++;
                if(e==length)
                    ans=ans+(prices[e-1]-prices[s]);
            }
            else{
                ans=ans+(prices[e-1]-prices[s]);
                s=e;
                e++;
            }
        }
        return ans;
    }
};