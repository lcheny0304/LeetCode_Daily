/*
执行用时：64 ms, 在所有 C++ 提交中击败了89.87%的用户
内存消耗：19.8 MB, 在所有 C++ 提交中击败了5.72%的用户

思路：
undered_map有一个插入方法：undered_map<int> arr(iterator1,iterator2)
这样可以通过比较nums数组的size和unordered_map的size判断是否有重复元素
*/

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> arr(nums.begin(),nums.end());
        if(arr.size()==nums.size())
            return false;
        else
            return true;
    }
};