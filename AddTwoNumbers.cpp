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
        ListNode *r = new ListNode(-1), *c = r;
        int carry = 0;
        while (carry || l1 || l2) {
            int sum = (l1 ? l1->val : 0) + (l2 ? l2->val : 0) + carry;
            c = c->next = new ListNode(sum % 10);
            carry = sum / 10;
            if (l1) l1 = l1->next;
            if (l2) l2 = l2->next;
        }
        return r->next;   
    }
};