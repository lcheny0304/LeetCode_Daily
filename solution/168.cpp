/*
执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
内存消耗：6.2 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
10进制转26进制
需要特别处理26的边界问题
*/

class Solution {
public:
    string ans;
    string convertToTitle(int n) {
        while(n>0){
            int temp=n%26;
            if(temp==0){
                temp=26;
                n=n-1;
            }
            char c=temp-1+'A';
            ans=ans+c;
            n=n/26;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};