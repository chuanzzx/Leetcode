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
        ListNode *p = head;
        int n = 0;
        stack<int> s;
        while (p != nullptr) {
            p = p->next;
            n++;
        }
        int odd = (n % 2), hf = n / 2;
        p = head;
        for (int i = 0; i < n; i++) {
            if (i < hf) {
                s.push(p->val);
            } else if (i > hf) {
                if (p->val == s.top())
                    s.pop();
            } else if (!odd) {
                if (p->val == s.top())
                    s.pop();
            }
            p = p->next;
        }
        return s.empty();
    }
};