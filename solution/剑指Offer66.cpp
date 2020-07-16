/*
执行用时：40 ms, 在所有 C++ 提交中击败了94.64%的用户
内存消耗：26.1 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
维护两个数组left[i]和right[i]，分别代表i之前的累积和i之后的累积（不含i）
这样ans[i]就是这两个数组对应的乘积
循环两次，O(n)的复杂度
*/

class Solution {
public:
    vector<int> constructArr(vector<int>& A) {
        if(A.size()==0)
            return A;
        int len=A.size();
        int* left=new int[len];
        int* right=new int[len];
        left[0]=right[len-1]=1;
        for(int i=1,j=len-2;i<len&&j>=0;i++,j--){
            left[i]=left[i-1]*A[i-1];
            right[j]=right[j+1]*A[j+1];
        }
        vector<int> ans;
        for(int i=0;i<len;i++)
            ans.push_back(left[i]*right[i]);
        return ans;
    }
};