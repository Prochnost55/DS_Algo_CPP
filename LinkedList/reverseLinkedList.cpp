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
    private:
        void solve(ListNode*& head, ListNode* curr, ListNode* prev){    
            if(curr == NULL){
                head = prev;
                return;
            }
            
            solve(head, curr->next, curr);
            curr->next = prev;
        } 
public:
    // this is using recursion
    
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev = NULL;
        
        solve(head, curr, prev);
    
        return head;
    }
    
    
    // this is iteratively
// ListNode* reverseList(ListNode* head) {
//         if(head == NULL){
//             return head;
//         }
        
//         ListNode* curr = head;
//         ListNode* prev = NULL;
        
//         while(curr->next != NULL){
//             head = head->next;
//             curr->next = prev;
//             prev = curr;
//             curr = head;
//         }
        
//         head->next = prev;
        
//         return head;
// }
    


};