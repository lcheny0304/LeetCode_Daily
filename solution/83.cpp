/*
执行用时：16 ms, 在所有 C++ 提交中击败了68.14%的用户
内存消耗：7.7 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
没啥好说的，两个指针，一个前一个后，pre-p，p判断当前结点值是否和pre相等，相等的话就把p删了。
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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)
            return head;
        ListNode* p=head->next;
        ListNode* pre=head;
        while(p!=NULL){
            if(p->val==pre->val){
                ListNode* temp=p;
                p=p->next;
                pre->next=p;
                delete(temp);
            }
            else{
                pre=p;
                p=p->next;
            }
        }
        return head;
    }
};