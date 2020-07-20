/*
执行用时：4 ms, 在所有 C++ 提交中击败了60.12%的用户
内存消耗：5.9 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
利用位操作
*/

class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        int power=31;
        while(n!=0){
            ans=ans+((n&1)<<power);
            power--;
            n=n>>1;
        }
        return ans;
    }
};