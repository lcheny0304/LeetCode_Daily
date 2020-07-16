/*
执行用时：24 ms, 在所有 C++ 提交中击败了11.88%的用户
内存消耗：56.9 MB, 在所有 C++ 提交中击败了35.85%的用户
*/

class Solution {
public:
    string countAndSay(int n) {
        string result = "1";
        for(int i=1;i<n;i++){
            string temp = result;
            result.clear();
            int cnt=1;
            for(int j=0;temp[j]!='\0';j++){
                if(temp[j]==temp[j+1])
                    cnt++;
                else{
                    result=result+to_string(cnt)+temp[j];
                    cnt = 1;
                }
            }
        }
        return result;
    }
};