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
        unordered_map<ListNode*, bool> imap;
        ListNode* temp = head;
        bool found = false;
        while(!found && temp != NULL){
            if(temp->next == NULL){
                return false;
            }
        
            if(imap.find(temp) == imap.end()){
                imap[temp] = true;
            }else{
                return imap[temp];
            }
            temp = temp->next;
        }
        return false;
    }
};