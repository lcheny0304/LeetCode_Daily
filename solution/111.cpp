/*
执行用时：16 ms, 在所有 C++ 提交中击败了53.09%的用户
内存消耗：17.3 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
得注意一个点
如果root->left==NULL,root->right!=NULL,这时候root的height是2，不是0
边界条件要注意
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
    int getHeight(TreeNode* root){
        if(root==NULL)
            return 0;
        if(root->left==NULL&&root->right==NULL)
            return 1;
        if(root->left==NULL)
            return getHeight(root->right)+1;
        if(root->right==NULL)
            return getHeight(root->left)+1;
        return min(getHeight(root->left),getHeight(root->right))+1;
    }
    int minDepth(TreeNode* root) {
        return getHeight(root);
    }
};