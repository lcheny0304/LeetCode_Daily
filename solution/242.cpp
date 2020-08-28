/*
执行用时：8 ms, 在所有 C++ 提交中击败了92.56%的用户
内存消耗：7.4 M, 在所有 C++ 提交中击败了100.00%的用户

思路：
空间换时间
*/

class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size()!=t.size())
            return false;
        array<int,27> s_num;
        array<int,27> t_num;
        transform(s.begin(),s.end(),s.begin(),::tolower);
        transform(t.begin(),t.end(),t.begin(),::tolower);
        fill(s_num.begin(),s_num.end(),0);
        fill(t_num.begin(),t_num.end(),0);
        for(int i=0;i<s.size();i++){
            s_num[s[i]-'a']++;
            t_num[t[i]-'a']++;
        }
        if(s_num==t_num)
            return true;
        else
            return false;
    }
};