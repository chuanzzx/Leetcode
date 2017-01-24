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
        ListNode *p = 0;
        while (head != 0) {
            ListNode *t = head;
            head = head->next;
            t->next = p;
            p = t;
        }
        return p;
    }
};