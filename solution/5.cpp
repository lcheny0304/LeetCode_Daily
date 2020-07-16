/*
执行用时：228 ms, 在所有 C++ 提交中击败了46.78%的用户
内存消耗：10.6 MB, 在所有 C++ 提交中击败了75.00%的用户

思路：
动态规划，dp[i][j]表示字符串i到j是否为回文子串。
dp[i][j]=dp[i+1][j-1];//s[i]==s[j]
         0;          //s[i]!=s[j]
以子串的长度为循环条件，即先考虑子串长度为3的情况，再考虑子串为4的情况
边界条件是子串长度为1和2
*/

class Solution {
public:
    string longestPalindrome(string s) {
        int MAXN=1000;
        int len=s.size();
        int dp[1000][1000]={0};
        int maxlen=1;
        string ans;
        ans.insert(ans.begin(),s.begin(),s.begin()+1);
        for(int i=0;i<len;i++){
            dp[i][i]=1;
            if(s[i]==s[i+1]&&i!=len-1){
                dp[i][i+1]=1;
                if(maxlen!=2){
                    maxlen=2;
                    ans.clear();
                    ans.insert(ans.begin(),s.begin()+i,s.begin()+i+2);
                }
            }
        }
        for(int gap=2;gap<len;gap++){
            for(int i=0,j=i+gap;j<len;i++,j++){
                if(s[i]==s[j]){
                    dp[i][j]=dp[i+1][j-1];
                    if(dp[i][j]==1){
                        int curlen=j-i+1;
                        if(curlen>maxlen){
                            maxlen=curlen;
                            ans.clear();
                            ans.insert(ans.begin(),s.begin()+i,s.begin()+i+curlen);
                        }
                    }
                }
                else
                    dp[i][j]=0;
            }
        }
        return ans;
    }
};