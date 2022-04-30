class Solution {
    private: 
        ListNode* getMid(ListNode* head){
            ListNode* fast = head->next;
            ListNode* slow = head;
            
            while(fast->next != NULL && fast->next->next != NULL){
                slow = slow->next;
                fast = fast->next->next;
            }
            return slow;
        };
        ListNode* reverse(ListNode* head){
            ListNode* prev = NULL;
            ListNode* curr = head;
            ListNode* next = curr->next;
            
            while(curr->next != NULL){
                curr->next = prev;
                prev = curr;
                curr = next;
                next = curr->next;
            }
            curr->next = prev;
            return curr;
        };
public:
    bool isPalindrome(ListNode* head) {
        if(head->next == NULL){
            return true;
        }
        
        ListNode* mid = getMid(head);
        ListNode* R = reverse(mid->next);
        ListNode* L = head;
        
        while(R != NULL){
            if(R->val != L->val){
                return false;
                break;
            }
            
            L = L->next;
            R = R->next;
        }
        
        return true;
    }
};