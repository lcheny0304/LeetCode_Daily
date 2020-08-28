/*
执行用时：8 ms, 在所有 C++ 提交中击败了91.42%的用户
内存消耗：8.9 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
双指针法
*/
class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int length=nums.size();
        if(length==0||length==1)
            return;
        int i=0,j=0;
        for(i,j;j<length;){
            if(nums[j]!=0){
                nums[i]=nums[j];
                i++;
                j++;
            }
            else{
                j++;
            }
        }
        if(i!=j)
            fill(nums.begin()+i,nums.end(),0);
    }
};