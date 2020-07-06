class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans;
        int size=strs.size();
        int length=0;
        for(int i=0;i<size;i++)
            length=length>strs[i].length()?length:strs[i].length();
        for(int i=0;i<length;i++){
            char temp=strs[0][i];
            for(int j=1;j<size;j++){
                if(strs[j][i]!=temp){
                    return ans;
                }
            }
            ans=ans+temp;
        }
        return ans;
    };
};