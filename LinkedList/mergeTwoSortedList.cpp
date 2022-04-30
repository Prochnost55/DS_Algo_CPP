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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* ans = new ListNode();
        ListNode* ansHead = ans;
        ListNode* head1 = list1;
        ListNode* head2 = list2;
        
        while(list1 != NULL || list2 != NULL){
            int a = list1 != NULL ? list1->val : INT_MAX;
            int b = list2 != NULL ? list2->val : INT_MAX;
            
            if(a <= b){
                ansHead->next = list1;
                ansHead = ansHead->next;
                list1 = list1->next;
            }else{
                ansHead->next = list2;
                ansHead = ansHead->next;
                list2 = list2->next;
            }
        }
        return ans->next;
    }
};