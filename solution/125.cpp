/*
执行用时：12 ms, 在所有 C++ 提交中击败了57.35%的用户
内存消耗：7.2 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
双指针，一头一尾进行比较
如果不是字母或者数字就跳过
*/
class Solution {
public:
    bool judge(char s){
        if((s>='0'&&s<='9')||(s>='a'&&s<='z')||(s>='A'&&s<='Z'))
            return true;
        else
            return false;
    }
    bool isPalindrome(string s) {
        int length=s.size();
        int gap='a'-'A';
        int i=0,j=length-1;
        while(i<=j){
            if(!isalnum(s[i])){
                i++;
                continue;
            }
            if(!isalnum(s[j])){
                j--;
                continue;
            }
            if(s[i]>='A'&&s[i]<='Z')
                s[i]+=gap;
            if(s[j]>='A'&&s[j]<='Z')
                s[j]+=gap;
            if(s[i]!=s[j]){
                return false;
            }
            i++;
            j--;
        }
        return true;
    }
};