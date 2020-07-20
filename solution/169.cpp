/*
执行用时：20 ms, 在所有 C++ 提交中击败了76.86%的用户
内存消耗：8.8 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
摩尔投票算法
如果我们把众数记为 +1，把其他数记为 -1−1，将它们全部加起来，显然和大于 0
维护一个候选人变量ans和一个统计变量cnt，首先设定数组的第一个元素为候选人，cnt=1，如果后面的元素与他相等，cnt++，反之cnt--
如果cnt为0，那么候选人变为下一个元素

投票算法证明：
如果候选人不是maj 则 maj,会和其他非候选人一起反对 会反对候选人,所以候选人一定会下台(maj==0时发生换届选举)
如果候选人是maj , 则maj 会支持自己，其他候选人会反对，同样因为maj 票数超过一半，所以maj 一定会成功当选
*/

class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ans=nums[0];
        int cnt=1;
        for(int i=1;i<nums.size();i++){
            if(cnt==0){
                ans=nums[i];
                cnt++;
                continue;
            }
            if(nums[i]==ans)
                cnt++;
            if(nums[i]!=ans){
                cnt--;
            }
        }
        return ans;
    }
};