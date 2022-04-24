// *
//  * Definition for singly-linked list.
//  * struct ListNode {
//  *     int val;
//  *     ListNode *next;
//  *     ListNode() : val(0), next(nullptr) {}
//  *     ListNode(int x) : val(x), next(nullptr) {}
//  *     ListNode(int x, ListNode *next) : val(x), next(next) {}
//  * };

class Solution {
    
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        
        // base case
        if(head == NULL){
            return head;
        }
        
        // get len
        ListNode* temp = head;
        int count = 0;
        while(temp != NULL){
            temp = temp->next;
            count++;
        }
        
        // 2nd base case
        if(count < k) {
            return head;
        }
        
        

        // reverse first k nodes
        int i = 0;
        ListNode* tempHead = head;
        ListNode* curr = tempHead;
        ListNode* prev = NULL;
        while(curr != NULL && i < k){
            tempHead = tempHead->next;
            curr->next = prev;
            prev = curr;
            curr = tempHead;
            i++;
        }
        
        // get reversed elements
        if(tempHead != NULL){
            head->next = reverseKGroup(tempHead, k);
        }
        
        return prev;
        
    }
};