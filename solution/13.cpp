/*
执行用时：16 ms, 在所有 C++ 提交中击败了74.36%的用户
内存消耗：8.6 MB, 在所有 C++ 提交中击败了55.71%的用户
*/

class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char,int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int ans=0;
        int pre=mp[s[0]],next;
        for(int i=1;s[i]!='\0';i++){
            next=mp[s[i]];
            if(next>pre){
                ans=ans-pre;
            }
            else 
                ans=ans+pre;
            pre=next;
        }
        ans+=pre;
        return ans;
    }
};