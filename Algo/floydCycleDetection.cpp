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
        if(head == NULL || head->next == head){
            return head;
        }
        
        ListNode* slow = head;
        ListNode* fast = head;
        bool cycle = false;
        
        while(fast != NULL){
            fast = fast->next;
            
            if(fast != NULL){
                fast = fast->next;
                slow = slow->next;
            }
            
            if(fast == slow){
                slow = head;
                while(slow!=fast){
                    slow = slow->next;
                    fast = fast->next;
                }
                return fast;
            }
        }
        
        return NULL;
    }
};
