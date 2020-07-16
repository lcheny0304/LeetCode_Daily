/*
执行用时：8 ms, 在所有 C++ 提交中击败了47.67%的用户
内存消耗：12.4 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
递归判断
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
    bool judgeSymmertric(TreeNode* a,TreeNode* b){
        if(a==NULL&&b==NULL)
            return true;
        if(a==NULL||b==NULL)
            return false;
        if(a->val!=b->val)
            return false;
        return judgeSymmertric(a->left,b->right)&&judgeSymmertric(a->right,b->left);
    }
    bool isSymmetric(TreeNode* root) {
        if(root==NULL)
            return true;
        return judgeSymmertric(root->left,root->right);
    }
};