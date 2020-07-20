/*
执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
内存消耗：5.9 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
位运算，跟0x1相与
*/
class Solution {
public:
    int hammingWeight(uint32_t n) {
        int cnt=0;
        while(n!=0){
            cnt=cnt+(n&1);
            n=n>>1;
        }
        return cnt;
    }
};