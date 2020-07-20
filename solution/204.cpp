/*
执行用时：104 ms, 在所有 C++ 提交中击败了71.33%的用户
内存消耗：7.4 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
埃氏筛法
*/

class Solution {
public:
    int countPrimes(int n) {
        if(n==1||n==0)
            return 0;
        bool isPrime[n+1];
        fill(isPrime,isPrime+n,true);
        isPrime[0]=isPrime[1]=false;
        for(int i=2;i<n;i++){
            int j=i+i;
            while(j<=n){
                isPrime[j]=false;
                j=j+i;
            }
        }
        int ans=0;
        for(int i=0;i<n;i++)
            ans+=isPrime[i];
        return ans;
    }
};