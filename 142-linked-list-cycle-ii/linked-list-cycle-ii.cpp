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
    ListNode *detectCycle(ListNode *head) {
        unordered_set<ListNode*>st;
        ListNode *pt=head;
        while(pt){
            if(st.find(pt)!=st.end()){
                return pt;
            }
            st.insert(pt);
            pt=pt->next;
        }
        return nullptr;
    }
};