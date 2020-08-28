/*
执行用时：52 ms, 在所有 C++ 提交中击败了87.72%的用户
内存消耗：23.4 MB, 在所有 C++ 提交中击败了6.45%的用户

思路：
双指针+swap
其实reverse()就可以解决……
*/

class Solution {
public:
    void reverseString(vector<char>& s) {
        int length=s.size()-1;
        for(int i=0,j=length;i<j;i++,j--)
            swap(s[i],s[j]);
    }
};