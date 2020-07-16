/*
执行用时：4 ms, 在所有 C++ 提交中击败了78.78%的用户
内存消耗：6.5 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
一开始是先补0到相同长度然后从尾往前算，但是很耗时
后来就改成了双指针，一个指a的尾一个指b的尾往前算，代码就长了一点
算的时候insert安排进位
累了，看了看题解也都是这么做的，改不动了
*/
class Solution {
public:
    string addBinary(string a, string b) {
        int a_length=a.size();
        int b_length=b.size();
        string ans="0";
        for(int i=a_length-1,j=b_length-1;i>=0||j>=0;i--,j--){
            if(i>=0&&j>=0){
                int temp=(int)(a[i]-'0')+(int)(b[j]-'0');
                while(temp--)
                    ans[0]++;
                ans.insert(0,"0");
                if(ans[1]!='0'&&ans[1]!='1'){
                    ans[1]-=2;
                    ans[0]++;
                }
            }
            else if(i>=0){
                int temp=(int)(a[i]-'0');
                while(temp--)
                    ans[0]++;
                ans.insert(0,"0");
                if(ans[1]!='0'&&ans[1]!='1'){
                    ans[1]-=2;
                    ans[0]++;
                }
            }
            else{
                int temp=(int)(b[j]-'0');
                while(temp--)
                    ans[0]++;
                ans.insert(0,"0");
                if(ans[1]!='0'&&ans[1]!='1'){
                    ans[1]-=2;
                    ans[0]++;
                }
            }
        }
        if(ans[0]=='0')
            ans.erase(ans.begin());
        return ans;
    }
};