/*
执行用时：8 ms, 在所有 C++ 提交中击败了91.20%的用户
内存消耗：14.3 MB, 在所有 C++ 提交中击败了5.61%的用户
*/

/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* ans = new ListNode;
        ListNode* head = ans;
        ans->next=NULL;
        while(l1!=NULL&&l2!=NULL){
            if(l1->val<=l2->val){
                ans->next=l1;
                ans=ans->next;
                l1=l1->next;
                ans->next=NULL;
            }
            else{
                ans->next=l2;
                ans=ans->next;
                l2=l2->next;
                ans->next=NULL;
            }
        }
        while(l1!=NULL){
            ans->next=l1;
            l1=l1->next;
            ans=ans->next;
            ans->next=NULL;
        }
        while(l2!=NULL){
            ans->next=l2;
            l2=l2->next;
            ans=ans->next;
            ans->next=NULL;
        }
        return head->next;
    }
};