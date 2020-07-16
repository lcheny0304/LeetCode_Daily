/*
执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
内存消耗：8.9 MB, 在所有 C++ 提交中击败了5.88%的用户
*/

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int length=digits.size();
        digits[--length]++;
        while(length>0&&digits[length]==10){
            digits[length]=0;
            digits[--length]++;
        }
        if(digits[0]==10){
            digits[0]=0;
            digits.insert(digits.begin(),1);
        }
        return digits;
    }
};