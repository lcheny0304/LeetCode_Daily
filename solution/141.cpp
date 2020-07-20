/*
执行用时：8 ms, 在所有 C++ 提交中击败了95.43%的用户
内存消耗：7.7 MB, 在所有 C++ 提交中击败了100.00%的用户

思路：
两个前进速度不一样的指针，如果有环，两个指针终会指向同一个结点
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
    bool hasCycle(ListNode *head) {
        if(head==NULL||head->next==NULL)
            return false;
        if(head->next==head)
            return true;
        ListNode* first=head->next;
        ListNode* second=head;
        while(first!=NULL&&second!=NULL){
            if(first==second)
                return true;
            if(first->next!=NULL)
                first=first->next->next;
            else
                return false;
            second=second->next;
        }
        return false;
    }
};