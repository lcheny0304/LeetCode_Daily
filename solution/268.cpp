/*
执行用时：32 ms, 在所有 C++ 提交中击败了98.26%的用户
内存消耗：17.2 MB, 在所有 C++ 提交中击败了8.70%的用户

思路：
方法1.排序，很花费时间
方法2.空间换时间，但是不知道要开多大的数组。。。可能会很大。。
方法3.求0..n的和，然后依次减去，但有可能因为数字过大超了INT_MAX
方法4.位运算，a^b^b=a，先求出0..n的异或（n=nums.size()),然后和nums中的值进行异或，太牛逼了这个方法，自己对于位运算掌握还是不够。。
*/

class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=1;i<=n;i++){
            ans=ans^i;
        }
        for(int i=0;i<n;i++)
            ans=ans^nums[i];
        return ans;
    }
};