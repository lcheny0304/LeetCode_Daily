/*
执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
内存消耗：6 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
n!=1*2*3*...*n
n!中含有一个p的有n/p个
含有两个p的有n/p^2个
含有k个p的有n/p^k个
为什么只求5不求2，是因为数中2的出现次数要比5多，比如1,2,3,4,5，出现了三个2才有一个5，所以只需要计算5的个数
*/
class Solution {
public:
    int trailingZeroes(int n) {
        int five=0;
        long long base=5;
        while(n>=base){
            five=five+n/base;
            base=base*5;
        }
        return five;
    }
};