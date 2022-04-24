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
    ListNode* middleNode(ListNode* head) {
        if(head == NULL || head->next == NULL){
            return head;
        }
        if(head->next->next == NULL){
            return head->next;
        }
        
        
        ListNode* ptr1 = head;
        ListNode* ptr2 = head;
        int i = 0;
        while(ptr1->next != NULL){
            if(i%2 == 0){
                ptr2 = ptr2->next;
            }
            ptr1 = ptr1->next;
            i++;
        }
        
        return ptr2;
        
    }
};