/*
执行用时：4 ms, 在所有 C++ 提交中击败了64.60%的用户
内存消耗：5.7 MB, 在所有 C++ 提交中击败了100.00%的用户

思路:
使用“快慢指针”思想找出循环：“快指针”每次走两步，“慢指针”每次走一步，当二者相等时，即为一个循环周期。
此时，判断是不是因为1引起的循环，是的话就是快乐数，否则不是快乐数。
https://leetcode-cn.com/problems/happy-number/solution/shi-yong-kuai-man-zhi-zhen-si-xiang-zhao-chu-xun-h/
*/
class Solution {
public:
    int JudgeHappy(int n){
        int sum=0;
        while(n!=0){
            int bit=n%10;
            sum=sum+bit*bit;
            n=n/10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int fast=n;
        int slow=n;
        do{
            slow=JudgeHappy(slow);
            fast=JudgeHappy(fast);
            fast=JudgeHappy(fast);
        }while(fast!=slow);
        return fast==1;
    }
};