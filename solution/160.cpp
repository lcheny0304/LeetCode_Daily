/*
执行用时：72 ms, 在所有 C++ 提交中击败了30.71%的用户
内存消耗：14.4 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
1.先统计两个链表的长度，得到长度差，长的那个链表先开始遍历，直到两个遍历指针距离尾部有同样的长度，然后统一开始往后挪，直到二者相等
2.若相交，链表A： a+c, 链表B : b+c. a+c+b+c = b+c+a+c 。则会在公共处c起点相遇。若不相交，a +b = b+a 。因此相遇处是NULL
1是我的想法，2是给的题解，结果我发现我自己写的比题解给的答案还快。。。无语
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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        ListNode* A_ptr=headA;
        ListNode* B_ptr=headB;
        while(A_ptr!=B_ptr){
            if(A_ptr==NULL)
                A_ptr=headB;
            else
                A_ptr=A_ptr->next;
            if(B_ptr==NULL)
                B_ptr=headA;
            else
                B_ptr=B_ptr->next;
        }
        return A_ptr;
    }
};