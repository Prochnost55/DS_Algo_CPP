/*
// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};
*/

// TC O(n);
// SC O(n);

// class Solution {
// public:
//     Node* copyRandomList(Node* head) {
        
//         if(head == NULL){
//             return NULL;
//         };
        
//         Node* ans = new Node(head->val);
//         Node* temp = head->next;
//         Node* ansTemp = ans;
        
//         map<Node*, Node*> m;
        
//         m[head] = ans;
        
//         while(temp != NULL){
//             ansTemp->next = new Node(temp->val);
//             ansTemp = ansTemp->next;
//             m[temp] = ansTemp;
//             temp = temp->next;
//         };
        
//         temp = head;
//         ansTemp = ans;
        
//         while(temp != NULL){
//             ansTemp->random = m[temp->random];
//             temp = temp->next;
//             ansTemp = ansTemp->next;
//         }
        
//         return ans;
//     }
// };


class Solution {
public:
    Node* copyRandomList(Node* head) {
        
        if(head == NULL){
            return NULL;
        };
        
        Node* ans = new Node(head->val);
        Node* temp = head->next;
        Node* ansTemp = ans;
        
        map<Node*, Node*> m;
        
        m[head] = ans;
        
        while(temp != NULL){
            ansTemp->next = new Node(temp->val);
            ansTemp = ansTemp->next;
            m[temp] = ansTemp;
            temp = temp->next;
        };
        
        temp = head;
        ansTemp = ans;
        
        while(temp != NULL){
            ansTemp->random = m[temp->random];
            temp = temp->next;
            ansTemp = ansTemp->next;
        }
        
        return ans;
    }
};