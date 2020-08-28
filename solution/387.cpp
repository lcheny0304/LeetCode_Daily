/*
执行用时：124 ms, 在所有 C++ 提交中击败了35.75%的用户
内存消耗：10.7 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
1.空间换时间，两次遍历，第一次记录出现的次数，第二次遍历判断s[i]出现的次数是否为1
2.利用string的find()和rfind()函数，如果对于s[i]从前到后找和从后到前找出现的位置一样，那么就找到了
给出方法2的代码和执行结果
*/
class Solution {
public:
    int firstUniqChar(string s) {
        for(int i=0;s[i]!='\0';i++){
            if(s.find(s[i])==s.rfind(s[i]))
                return i;
        }
        return -1;
    }
};