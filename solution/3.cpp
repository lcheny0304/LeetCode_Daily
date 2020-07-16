/*
执行用时：68 ms, 在所有 C++ 提交中击败了23.83%的用户
内存消耗：11.2 MB, 在所有 C++ 提交中击败了39.70%的用户

思路：
滑动窗口：https://leetcode-cn.com/problems/longest-substring-without-repeating-characters/solution/hua-dong-chuang-kou-by-powcai/
维持一个窗口队列，保证这个队列里的值都是不重复的。
遇到下一个值，如果这个值在这个队列里出现，就不断弹出队列的队首，直到这个值与队列元素不冲突。
队列可以用unordered_set实现。
一直维持这样的队列，找到队列的最大长度。
*/

class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()==0)
            return 0;
        int ans=0;
        int left=0;
        unordered_set<char> IsExist;
        for(int i=0;i<s.size();i++){
            while(IsExist.count(s[i])!=0){
                IsExist.erase(s[left]);
                left++;
            }
            IsExist.insert(s[i]);
            ans=max(ans,i-left+1);
        }
        return ans;
    }
};