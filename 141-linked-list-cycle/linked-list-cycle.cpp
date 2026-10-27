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
    bool hasCycle(ListNode *head) {
        unordered_set<ListNode*>st;
        ListNode *pt=head;
        while(pt){
            if(st.find(pt)!=st.end()){
                return true;
            }
            st.insert(pt);
            pt=pt->next;
        }
        return false;
    }
};