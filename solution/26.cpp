/*
执行用时：16 ms, 在所有 C++ 提交中击败了90.71%的用户
内存消耗：7.4 MB, 在所有 C++ 提交中击败了100.00%的用户
*/

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if(nums.size()<1)
            return 0;
        int i=0,j=1;
        for(j;j<nums.size();j++){
            if(nums[i]!=nums[j])
                nums[++i]=nums[j];
        }
        return i+1;
    }
};
