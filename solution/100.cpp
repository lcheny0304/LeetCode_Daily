/*
执行用时：0 ms, 在所有 C++ 提交中击败了100.00%的用户
内存消耗：7.6 MB, 在所有 C++ 提交中击败了100.00%的用户

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
    bool isSameTree(TreeNode* p, TreeNode* q) {
        if(p==NULL&&q==NULL)
            return true;
        if(p==NULL||q==NULL)
            return false;
        if(p->val!=q->val)
            return false;
        return isSameTree(p->left,q->left)&&isSameTree(p->right,q->right);
    }
};