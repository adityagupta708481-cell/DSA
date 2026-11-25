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
    ListNode* partition(ListNode* head, int x) {
        if (head == NULL)
            return head;
        ListNode* ans = new ListNode(0);
        ListNode* temp = ans;
        ListNode* p1 = head;
        while (p1) {
            if ((p1->val) < x) {
                temp->next = new ListNode(p1->val);
                temp = temp->next;
            }
            p1 = p1->next;
        }
        p1 = head;
        while (p1) {
            if ((p1->val) >= x) {
                temp->next = new ListNode(p1->val);
                temp = temp->next;
            }
            p1 = p1->next;
        }
        temp->next = NULL;
        return ans->next;
    }
};