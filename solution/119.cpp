/*
执行用时：4 ms, 在所有 C++ 提交中击败了41.93%的用户
内存消耗：6.4 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
二重遍历
和前一题一样
不过可以不用开二维的数组，两个一维的就够了。
*/

class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> lastLine;
        vector<int> curLine;
        for(int i=0;i<=rowIndex;i++){
            curLine.clear();
            for(int j=0;j<=i;j++){
                if(j==0||j==i)
                curLine.push_back(1);
                else{
                    curLine.push_back(lastLine[j-1]+curLine[j]);
                }
            }
            lastLine=curLine;
        }
        return curLine;
    }
};