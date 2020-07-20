/*
执行用时：4 ms, 在所有 C++ 提交中击败了60.11%的用户
内存消耗：5.9 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
普通的遍历
*/

class Solution {
public:
    int titleToNumber(string s) {
        int len=s.size();
        int ans=0;
        for(int i=0;i<len;i++){
            int temp=s[i]-'A'+1;
            ans=ans*26+temp;
        }
        return ans;
    }
};