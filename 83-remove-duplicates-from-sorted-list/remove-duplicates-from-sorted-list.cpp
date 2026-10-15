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
    ListNode* deleteDuplicates(ListNode* head) {
        if(head==NULL)return NULL;
        ListNode* temp=new ListNode(0);
        ListNode* current=temp;
        while(head->next!=NULL){
            if((head->val)!=(head->next->val)){
                current->next=head;
                current=current->next;
            }
            head=head->next;
        }
        current->next=head;
        return temp->next;
        
        
    }
};