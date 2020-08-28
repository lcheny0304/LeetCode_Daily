/*
执行用时：44 ms, 在所有 C++ 提交中击败了81.09%的用户
内存消耗：15.4 MB, 在所有 C++ 提交中击败了6.25%的用户
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
    ListNode* removeElements(ListNode* head, int val) {
        ListNode* pre=new ListNode;
        ListNode* ans=pre;
        pre->next=head;
        while(pre->next!=NULL){
            if(pre->next->val==val){
                ListNode* temp=pre->next;
                pre->next=temp->next;
                delete temp;
            }
            else
                pre=pre->next;
        }
        return ans->next;
    }
};