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
    ListNode* rotateRight(ListNode* head, int k) {

        ListNode* ans = new ListNode(0);
        ListNode* temp = ans;
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode *cur=head;
        int len=0;
        while(cur){
            len++;
            cur=cur->next;
        }
        k=k%len;

        ListNode *pointer1 = head, *pointer2 = head;
        for (int i = 0; i <len-k; i++) {
            pointer1 = pointer1->next;
            pointer2 = pointer2->next;
        }

        while (pointer1) {
            temp->next = pointer1;
            temp=temp->next;
            pointer1 = pointer1->next;
        }
        while (head != pointer2) {
            temp->next = head;
            temp=temp->next;
            head = head->next;
        }
        temp->next = NULL;
        return ans->next;
    }
};