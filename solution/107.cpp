/*
执行用时：4 ms, 在所有 C++ 提交中击败了91.51%的用户
内存消耗：11.6 MB, 在所有 C++ 提交中击败了100%的用户

吐槽：
无语，struct里多定义一个length可以解决多少问题！！！
想了大半天写了半个小时结果结果出来才超过7%的用户，气死我了气死我了气死我了气死我了。
看了题解的思路结果也才超过30%，愁死。
（https://leetcode-cn.com/problems/binary-tree-level-order-traversal-ii/solution/er-cha-shu-de-ceng-ci-bian-li-ii-c-ru-he-shi-yong-/）
最后看了另一个题解，发现一种函数std::reverse可以进行反转。
想到vector的insert函数可能比较耗时，就改成了push_back，最后返回前反转一下，就超过90%+了。
还是STL库不熟啊。
*/

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> ans;
        vector<int> temp;
        queue<TreeNode*> q;
        q.push(root);
        int size=0;
        int cap=1;
        if(root==NULL)
            return ans;
        //size=(root->right!=NULL)+(root->left!=NULL);
        while(!q.empty()){
            TreeNode* cur=q.front();
            q.pop();
            if(cur->left!=NULL){
                q.push(cur->left);
                size++;
            }
            if(cur->right!=NULL){
                q.push(cur->right);
                size++;
            }
            cap--;
            temp.push_back(cur->val);
            if(cap==0){
                ans.push_back(temp);
                temp.clear();
                cap=size;
                size=0;
            }
        }
        if(temp.size()!=0)
            ans.push_back(temp);
        std::reverse(ans.begin(),ans.end());
        return ans;
    }
};