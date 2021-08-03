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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int r, x = 0, sum;
        ListNode *ln = new ListNode(0);
        ListNode *temp = ln;
        
        while(l1 != nullptr || l2 != nullptr) {
            if(l1 == nullptr) {
                sum = l2->val + x;
            }
            else if(l2 == nullptr) {
                sum = l1->val + x;
            }
            else {
                sum = l1->val + l2->val + x;
            }
            x = sum / 10;
            temp->next = new ListNode(sum % 10);
            if(l1 != nullptr) l1 = l1->next;
            if(l2 != nullptr) l2 = l2->next;
            temp = temp->next;
        }
        
        if(x > 0) temp->next = new ListNode(x);
        
        if(ln->next == nullptr)
            return ln;
        return ln->next;
    }
};
