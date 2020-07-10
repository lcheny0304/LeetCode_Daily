/*
执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
内存消耗：6.4 MB, 在所有 C++ 提交中击败了100.00%的用户
*/
class Solution {
public:
    bool isValid(string s) {
        stack<char> kuohao;
        for(int i=0;s[i]!='\0';i++){
            char temp=s[i];
            if(temp=='('||temp=='['||temp=='{'){
                kuohao.push(temp);
                continue;
            }
            if(kuohao.empty())
                return false;
            if(temp==')'){
                if(kuohao.top()=='(')
                    kuohao.pop();
                else
                    return false;
            }
            else if(temp==']'){
                if(kuohao.top()=='[')
                    kuohao.pop();
                else
                    return false;
            }
            else if(temp=='}'){
                if(kuohao.top()=='{')
                    kuohao.pop();
                else
                    return false;
            }
        }
        if(kuohao.empty())
            return true;
        else
            return false;
    }
};