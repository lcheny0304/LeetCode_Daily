/*
执行用时：32 ms, 在所有 C++ 提交中击败了80.55%的用户
内存消耗：9.3 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
没什么特别的思路，就两个链表对应的加起来，注意进位位和边界条件就行了。
不知道为什么难度是medium。
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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans=new ListNode;
        ListNode* head=ans;
        ans->next=NULL;
        int carry=0;
        int sum=0;
        while(l1!=NULL&&l2!=NULL){
            ListNode* temp=new ListNode;
            sum=l1->val+l2->val+carry;
            temp->val=sum%10;
            carry=sum/10;
            temp->next=NULL;
            ans->next=temp;
            ans=ans->next;
            l1=l1->next;
            l2=l2->next;
        }
        while(l1!=NULL){
            ListNode* temp=new ListNode;
            sum=l1->val+carry;
            temp->val=sum%10;
            carry=sum/10;
            temp->next=NULL;
            ans->next=temp;
            ans=ans->next;
            l1=l1->next;
        }
        while(l2!=NULL){
            ListNode* temp=new ListNode;
            sum=l2->val+carry;
            temp->val=sum%10;
            carry=sum/10;
            temp->next=NULL;
            ans->next=temp;
            ans=ans->next;
            l2=l2->next;
        }
        if(carry!=0){
            ListNode* temp=new ListNode;
            temp->val=carry;
            temp->next=NULL;
            ans->next=temp;
        }
        return head->next;
    }
};