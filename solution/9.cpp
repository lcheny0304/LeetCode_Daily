/*
执行用时：20 ms, 在所有 C++ 提交中击败了47.66%的用户
内存消耗：6 MB, 在所有 C++ 提交中击败了100.00%的用户
*/

class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0)
            return false;
        if(x%10==0&&x/10!=0)
            return false;
        char number[10];
        int i=0;
        do{
            number[i]=x%10;
            x=x/10;
            i++;
        }while(x!=0);
        i--;
        for(int j=0;j<i;j++,i--){
            if(number[i]==number[j])
                continue;
            return false;
        }
        return true;
    }
};