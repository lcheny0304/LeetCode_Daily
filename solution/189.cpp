/*
执行用时：8 ms, 在所有 C++ 提交中击败了87.12%的用户
内存消耗：9.8 MB, 在所有 C++ 提交中击败了5.55%的用户

思路：
先从头到尾翻转数组，再翻转前k个，再翻转之后的
*/
class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        k=k%nums.size();
        reverse(nums.begin(),nums.end());
        reverse(nums.begin(),nums.begin()+k);
        reverse(nums.begin()+k,nums.end());
    }
};