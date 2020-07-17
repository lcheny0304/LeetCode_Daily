/*
执行用时：12 ms, 在所有 C++ 提交中击败了84.36%的用户
内存消耗：17.5 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
这边界条件我服了……
！！！注意必须是叶子结点！！！
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
    bool judgement(TreeNode* root, int sum){
        if(root->right==NULL&&root->left==NULL)
            return root->val==sum;
        if(root->left==NULL)
            return judgement(root->right,sum-root->val);
        if(root->right==NULL)
            return judgement(root->left,sum-root->val);
        return judgement(root->left,sum-root->val)||judgement(root->right,sum-root->val);
    }
    bool hasPathSum(TreeNode* root, int sum) {
        if(root==NULL)
            return false;
        return judgement(root,sum);
    }
};