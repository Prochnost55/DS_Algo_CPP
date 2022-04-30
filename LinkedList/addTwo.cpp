class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* carry = new ListNode(0);
        ListNode* ans = new ListNode(0);
        ListNode* ansCurr = ans;
        ListNode* ansPrev = NULL;
        
        ListNode* temp1 = l1;
        ListNode* temp2 = l2;
        
        int a = temp1->val;
        int b = temp2->val;
        
        while( temp1 != NULL || temp2 != NULL){
            int sum = a + b + carry->val;            
            carry->val = 0;
            
            if(sum > 9){
                ansCurr->val = sum % 10;
                carry->val = sum / 10;
            }else{
                ansCurr->val = sum;
            }
            
            
            if(temp1 != NULL && temp1->next != NULL){
                temp1 = temp1->next;
                a = temp1->val;
            }else{
                a = 0;
                temp1 = NULL;
            }
            
            if(temp2 != NULL && temp2->next != NULL){
                temp2 = temp2->next;
                b = temp2->val;
            }else{
                b = 0;
                temp2 = NULL;
            }
            
            ListNode* ansNext = new ListNode(0);
            ansPrev = ansCurr;
            ansCurr -> next = ansNext;
            ansCurr = ansNext;
        }
        
        if(carry->val > 0){
            ansPrev->next = carry;
        }else{
            ansPrev->next = NULL;
        }
        return ans;
    }
};