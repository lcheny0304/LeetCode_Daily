/*
执行用时：4 ms, 在所有 C++ 提交中击败了78.86%的用户
内存消耗：7.2 MB, 在所有 C++ 提交中击败了100.00%的用户
*/

class Solution {
public:
    vector<int> getNext(string needle){
        vector<int> next;
        int blen=needle.size();
        next.push_back(-1);
        int j=0,k=-1;
        while(j<blen-1){
            if(k==-1||needle[j]==needle[k]){
                j++;
                k++;
                next.push_back(k);
            }
            else
                k=next[k];
        }
        return next;
    }
    int strStr(string haystack, string needle) {
        int alen=haystack.size();
        int blen=needle.size();
        vector<int> next=getNext(needle);
        if(blen==0)
            return 0;
        int i=0,j=0;
        while(i<alen && j<blen){
            if(j==-1||haystack[i]==needle[j]){
                i++;
                j++;
            }
            else{
                j=next[j];
            }
        }
        if(j==blen)
            return i-j;
        else
            return -1;
    }
};