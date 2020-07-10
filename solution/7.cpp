/*
执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
内存消耗：5.9 MB, 在所有 C++ 提交中击败了100.00%的用户
*/

class Solution {
public:
    int reverse(int x) {
        int ans=0;
        bool flag=false;
        if(x==INT_MIN)
            return 0;
        if(x<0){
            x=-x;
            flag=true;
        }
        while(x>0){
            ans=ans*10+x%10;
            x=x/10;
            if(ans>(INT_MAX/10)&&x!=0)
                return 0;
        }
        if(flag==true)
            ans=-ans;
        return ans;
    }
};