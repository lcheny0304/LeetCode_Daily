/*
执行用时：4 ms, 在所有 C++ 提交中击败了99.37%的用户
内存消耗：7.9 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
顺序遍历查看是否是15/3/5的倍数
*/
class Solution {
public:
    vector<string> fizzBuzz(int n) {
        vector<string> ans;
        for(int i=1;i<=n;i++){
            if(i%15==0)
                ans.push_back("FizzBuzz");
            else if (i%3==0)
                ans.push_back("Fizz");
            else if (i%5==0)
                ans.push_back("Buzz");
            else
                ans.push_back(to_string(i));
        }
        return ans;
    }
};