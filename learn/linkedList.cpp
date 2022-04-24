#include<iostream>
using namespace std;

class Node {
    public:
        int data;
        Node* next;

    // use of constructor
    Node(int value){
        data = value;
        next = NULL;
    }
};

class LinkedList {
    public:
        Node* head = NULL;
        Node* tail = NULL;
        int length = 0;
        
        void insert(int value){
            Node* temp = new Node(value);
            if(head == NULL && tail == NULL){
                head = temp;
                tail = temp;
            }else{
                tail->next = temp;
                tail=temp;    
            } 
            length++;
        }

        void insert(int value, int pos){
            if(head == NULL && tail == NULL){
                this->insert(value);
                return;
            }else if(pos == 0) {
                Node* temp = new Node(value);
                temp->next = head;
                head = temp;
            }else{
                Node* temp = new Node(value);
                Node* headCpy = head;
                int i = 0;
                while(i<pos-1){
                    headCpy = headCpy->next;
                    if(headCpy == NULL){ 
                        this->insert(value);
                        return;
                    }
                    i++;
                }
                temp->next = headCpy->next;
                headCpy->next = temp;  
            } 
            length++;
        }

        void print(){
            Node* temp = head;
            while(temp != NULL){
                cout << temp->data << " ";
                temp = temp->next; 
            }
            cout << endl;
        }
};

void insertAtHead(int value, Node*& head, Node*& tail){
    Node* node2 = new Node(value);
    node2->next = head;
    head = node2;   
}

void insertAtEnd(int value, Node*& head, Node*& tail){
    Node* temp = new Node(value);
    tail->next = temp;
    tail=temp;   
}

void insertAtMid(int value, int pos, Node*& head, Node*& tail){
    if(pos == 0){
        insertAtHead(value, head, tail);
        return;
    };
    
    Node* temp = new Node(value);
    Node* headCpy = head;
    int i = 0;
    
    while(i<pos-1){
        headCpy = headCpy->next;
        if(headCpy == NULL){ 
            insertAtEnd(value, head, tail);
            return;
        }
        i++;
    }
    temp->next = headCpy->next;
    headCpy->next = temp;
}

void printLinkedList(Node* head){
    while(head != NULL){
        cout << head->data << " ";
        head = head->next; 
    }
    cout << endl;
}


int main(){
    // Node* node1 = new Node(10);
    // Node* head = node1;
    // Node* tail = node1;
    // insertAtHead(20, head, tail);
    // insertAtHead(30, head, tail);
    // printLinkedList(head);
    // insertAtEnd(40, head, tail);
    // printLinkedList(head);
    // insertAtMid(50, 4, head, tail);
    // printLinkedList(head);

    LinkedList LL;
    LL.insert(10);
    LL.insert(20);
    LL.insert(30);
    LL.insert(40, 0);
    LL.print();
    cout << LL.length << endl;
}