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
    ListNode* swapPairs(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode *p1 = head, *p2 = head->next;
        ListNode* ans = new ListNode(0);
        ListNode* temp = ans;
        while (p1 && p1->next) {
            p2 = p1->next; 
            ListNode* nextPair = p2->next; 
            temp->next = p2;
            temp = temp->next;
            temp->next = p1;
            temp = temp->next;
            p1 = nextPair;
        }
        temp->next = p1; 
        return ans->next;
    }
};