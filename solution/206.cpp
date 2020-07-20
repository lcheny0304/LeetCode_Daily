/*
执行用时：8 ms, 在所有 C++ 提交中击败了96.03%的用户
内存消耗：8.6 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
1.新建一个链表，然后不断地插入
2.三个指针，pre，cur，Next。cur->next=pre;pre=cur;cur=Next;遍历整个链表，把箭头给翻转。但是花了很长时间哎，是方法1的三倍，以为这种会快很多的。
代码给的是方法1的解法。
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
    ListNode* reverseList(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return head;
        ListNode* rev_head=new ListNode;
        rev_head->next=NULL;
        while(head!=NULL){
            ListNode* temp=new ListNode;
            temp->val=head->val;
            temp->next=rev_head->next;
            rev_head->next=temp;
            head=head->next;
        }
        return rev_head->next;
    }
};