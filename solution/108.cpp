/*
执行用时：24 ms, 在所有 C++ 提交中击败了90.54%的用户
内存消耗：23.3 MB, 在所有 C++ 提交中击败了24.00%的用户

思路：
https://leetcode-cn.com/problems/convert-sorted-array-to-binary-search-tree/solution/xiang-xi-tong-su-de-si-lu-fen-xi-duo-jie-fa-by-24/
二叉搜索树的中序遍历刚好可以输出一个升序数组，所以题目给出的升序数组就是二叉搜索树的中序遍历。
通过中序遍历加前序遍历或者中序遍历加后序遍历来还原一棵树，这里，前序（后序）遍历的作用是提供根节点！
平衡二叉树，既然要做到平衡，我们只要把根节点选为数组的中点即可。
这样就相当于根据中序遍历和前序遍历重构二叉树。
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
    TreeNode* sortedArrayToBST(vector<int>& nums,int start, int end){
        if(start>end)
            return NULL;
        int mid=(start+end+1)/2;
        TreeNode* root=new TreeNode;
        root->val=nums[mid];
        root->left=sortedArrayToBST(nums, start, mid-1);
        root->right=sortedArrayToBST(nums,mid+1,end);
        return root;
    }
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return sortedArrayToBST(nums,0,nums.size()-1);
    }
};