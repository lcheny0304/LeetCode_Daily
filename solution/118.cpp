/*
执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
内存消耗：6.5 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
二重遍历
*/

class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> ans;
        vector<int> curLine;
        for(int i=0;i<numRows;i++){
            for(int j=0;j<=i;j++){
                if(j==0||j==i)
                curLine.push_back(1);
                else{
                    curLine.push_back(ans[i-1][j-1]+ans[i-1][j]);
                }
            }
            ans.push_back(curLine);
            curLine.clear();
        }
        return ans;
    }
};