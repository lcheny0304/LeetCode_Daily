/*
执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
内存消耗：5.8 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
位运算。
a+b=(a^b)+(a&b)<<1
可以令b为进位位，如果b不为0，始终循环
*/

class Solution {
public:
    int getSum(int a, int b) {
        unsigned int B=b;
        while(B!=0){
            int temp=a^B;
            B=(a&B)<<1;
            a=temp;
        }
        return a;
    }
};