/*
执行用时：16 ms, 在所有 C++ 提交中击败了85.16%的用户
内存消耗：8.1 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
这题给的是要删除地结点，那就可以把下一个结点的值赋给它，然后删除下一个
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        ListNode* temp=node->next;
        node->val=temp->val;
        node->next=temp->next;
        delete(temp);
    }
};