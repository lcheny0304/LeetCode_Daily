/*
执行用时：12 ms, 在所有 C++ 提交中击败了65.19%的用户
内存消耗：17 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
递归。
如果构造二叉树的时候，结构体里多一个层数就好了，这样会重复计算。
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
    int maxDepth(TreeNode* pRoot) {
        if(pRoot==NULL)
               return 0;
        return max(maxDepth(pRoot->left),maxDepth(pRoot->right))+1;
    }
};