/*
执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
内存消耗：6.2 MB, 在所有 C++ 提交中击败了100.00%的用户
*/

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        for(int i=0;i<nums.size();i++){
            if(nums[i]==val){
                nums.erase(nums.begin()+i);
                i--;
            }
        }
        return nums.size();
    }
};