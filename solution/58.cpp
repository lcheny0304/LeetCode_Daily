/*
执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
内存消耗：6.5 MB, 在所有 C++ 提交中击败了100.00%的用户
*/

class Solution {
public:
    int lengthOfLastWord(string s) {
        int length=s.size();
        int cnt=0;
        int i=length-1;
        while(i>=0&&s[i]==' ')
            i--;
        for(i;i>=0;i--){
            if(s[i]==' ')
                break;
            cnt++;
        }
        return cnt;
    }
};