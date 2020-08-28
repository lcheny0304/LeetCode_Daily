/*
执行用时：12 ms, 在所有 C++ 提交中击败了62.97%的用户
内存消耗：9.5 MB, 在所有 C++ 提交中击败了48.28%的用户

思路：
和第一题two-sum两数之和一样
*/

class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        vector<int> ans;
        int j=numbers.size()-1;
        if(j<0)
            return ans;
        int i=0;
        for(i,j;i<j;){
            if(numbers[i]+numbers[j]==target){
                ans.push_back(i+1);
                ans.push_back(j+1);
                return ans;
            }
            if(numbers[i]+numbers[j]>target){
                j--;
            }
            if(numbers[i]+numbers[j]<target)
                i++;
        }
        return ans;
    }
};