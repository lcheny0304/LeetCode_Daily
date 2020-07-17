/*
执行用时：28 ms, 在所有 C++ 提交中击败了8.31%的用户
内存消耗：14.1 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
递归，看了各种题解，怎么还是很耗时。。。
https://leetcode-cn.com/problems/balanced-binary-tree/solution/ping-heng-er-cha-shu-by-leetcode/
https://leetcode-cn.com/problems/balanced-binary-tree/solution/balanced-binary-tree-di-gui-fang-fa-by-jin40789108/
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
    bool getHeight(TreeNode* root,int& height){
        if(root==NULL){
            height=0;
            return true;
        }
        else{
                int leftHeight,rightHeight;
                if(getHeight(root->left,leftHeight)&&getHeight(root->right,rightHeight)&&abs(leftHeight-rightHeight)<2){
                    height=max(leftHeight,rightHeight)+1;
                    return true;
                }
        }
        return false;
    }
    bool isBalanced(TreeNode* root) {
        if(root==NULL)
            return true;
        int height;
        return getHeight(root,height);
    }
};