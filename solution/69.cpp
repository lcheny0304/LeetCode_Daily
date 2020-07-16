/*
执行用时：4 ms, 在所有 C++ 提交中击败了59.40%的用户
内存消耗：6 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
二分法，没啥好说的
*/

class Solution {
public:
    int mySqrt(int x) {
        int left=0;
        int right=x/2+1;
        while(left<right){
            int mid=(left+right+1)>>1;
            if((long long)mid*mid<=x)
                left=mid;
            else
                right=mid-1;
        }
        return left;
    }
};