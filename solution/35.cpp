/*
执行用时：4 ms, 在所有 C++ 提交中击败了95.79%的用户
内存消耗：6.6 MB, 在所有 C++ 提交中击败了100.00%的用户
*/

class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        auto start=nums.begin();
        int length=nums.size();
        auto lowerPos=lower_bound(start,start+length,target);
        if(nums[length-1]<target)
            return length;
        if(nums[0]>target)
            return 0;
        return lowerPos-start;
    }
};