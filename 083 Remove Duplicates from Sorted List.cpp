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
        ListNode *p = head;
        while (p != nullptr && p->next != nullptr) {
            ListNode* pn = p->next;
            while (pn != nullptr && pn->val == p->val) {
                pn = pn->next;
            }
            p->next = pn;
            p = p->next;
        }
        return head;
    }
};