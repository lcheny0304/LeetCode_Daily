/*
执行用时：12 ms, 在所有 C++ 提交中击败了95.99%的用户
内存消耗：5.8 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
循环迭代：
循环判断，自己写的花了32ms，各种if-return，然后看了题解发现不用这么麻烦。。。
先判断n是不是小于1的数，接着只要n能被3整除，就除以3，判断最后是不是等于1就行。。
另一种方法：换底公式
如果n是3的幂，那么log3(n)一定也是整数
*/

//方法一
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1)
            return false;
        while(n%3==0){
            n=n/3;
        }
        return n==1;
    }
};

//方法二
/*
class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<1)
            return false;
        double res=log10(n)/log10(3);
        if(res-(int)res==0)
            return true;
        else
            return false;
    }
};
*/