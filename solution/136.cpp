/*
执行用时：28 ms, 在所有 C++ 提交中击败了34.12%的用户
内存消耗：11.5 MB, 在所有 C++ 提交中击败了9.80%的用户

思路：
a^b^a=a^a^b=b
*/

class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int ans=nums[0];
        int length=nums.size();
        for(int i=1;i<length;i++){
            ans=ans^nums[i];
        }
        return ans;
    }
};