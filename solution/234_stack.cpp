/*
执行用时：36 ms, 在所有 C++ 提交中击败了44.85%的用户
内存消耗：14.4 MB, 在所有 C++ 提交中击败了5.72%的用户

思路：
先统计链表里元素的数量
然后再遍历，把前一半的元素存入栈里，后面的跟栈里的元素比较
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
    bool isPalindrome(ListNode* head) {
        if(head==NULL||head->next==NULL)
            return true;
        stack<int> s;
        ListNode* ptr=head;
        int length=0;
        while(ptr!=NULL){
            length++;
            ptr=ptr->next;
        }
        for(int i=0;i<length;i++){
            if(i<length/2){
                s.push(head->val);
                head=head->next;
            }
            else if((i==length/2)&&(length%2==1)){
                head=head->next;
                continue;
            }
            else{
                if(head->val!=s.top())
                    return false;
                else{
                    s.pop();
                    head=head->next;
                }
            }
        }
        return true;
    }
};