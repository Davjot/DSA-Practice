// this file contains deletion at any position, head and tail

#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node *prev;
        Node *next;

        // constructor
        Node(int d){
            this -> data = d;
            this -> prev = NULL;
            this -> next = NULL;
        }
        ~Node(){
            int val = this -> data;
            if(next != NULL){
                delete next;
                next = NULL;
            }
            cout << "Memory free!" << val << endl;
        }
};

// traverse double linked list
void print(Node *head){
    Node *temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

// gives length of the linked list
int getlength(Node *head){
    int len = 0;
    Node *temp = head;

    while(temp != NULL){
        len++;
        temp = temp -> next;
    }
    return len;
}

// insertion at the head of the list
void insertAtHead(Node* &tail ,Node* &head, int d){

    // empty list
    if(head == NULL){
        Node* temp = new Node(d);
        head = temp;
        tail = temp;
    }
    else{ 
    Node *temp = new Node(d);
    temp -> next = head;
    head -> prev = temp;
    head = temp;
    }
}

// insertion at tail of the list
void insertAtTail(Node* &tail, Node* &head, int d){
    if(tail == NULL){
        Node *temp = new Node(d);
        tail = temp;
        head = temp;
    }
    else{
         Node *temp = new Node(d);
        tail -> next = temp;
        temp -> prev = tail;
        tail = temp;
    }
}

// insertion at any position of the linked list
void insertAtPosition(Node* &tail, Node* &head, int position, int d){
    // insert at start
    if(position == 1){
        insertAtHead(tail, head, d);
        return;
    }

    Node *temp = head;
    int count = 1;

    while(count < position - 1){
        temp = temp -> next;
        count++;
    }

    // insert at last position
    if(temp -> next == NULL){
        insertAtTail(tail, head, d);
        return;
    }

    // creating a node for d
    Node* nodeToInsert = new Node(d);

    nodeToInsert -> next = temp -> next;
    temp -> next -> prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

// deletion of any node at any position
void deleteNode(int position, Node* &head){
    // deleting the first node
    if(position == 1){
        Node *temp = head;
        temp -> next -> prev = NULL;
        head = temp -> next;
        temp -> next = NULL;
        delete temp;
    }
    else{
        // deleting the node at last or middle position
        Node* curr = head;
        Node* prev = NULL;

        int count = 1;
        while(count < position){
            prev = curr;
            curr = curr -> next;
            count++;
        }

        curr -> prev = NULL;
        prev -> next = curr -> next;
        curr -> next = NULL;

        delete curr;
    }
}

int main()
{
    // Node *node1 = new Node(10);
    // Node *head = node1;
    // Node *tail = node1;
    Node *head = NULL;
    Node *tail = NULL;

    print(head);

    // cout << getlength(head) << endl;

    insertAtHead(tail, head, 12);
    print(head);

    cout << "head : " << head -> data << endl;
    cout << "tail : " << tail -> data << endl;

    insertAtTail(tail, head, 15);
    print(head);

    cout << "head : " << head -> data << endl;
    cout << "tail : " << tail -> data << endl;

    insertAtPosition(tail, head, 2, 9);
    print(head);

    cout << "head : " << head -> data << endl;
    cout << "tail : " << tail -> data << endl;

    insertAtPosition(tail, head, 3, 19);
    print(head);

    cout << "head : " << head -> data << endl;
    cout << "tail : " << tail -> data << endl;

    deleteNode(1, head);
    print(head);

    cout << "head : " << head -> data << endl;
    cout << "tail : " << tail -> data << endl;
    return 0;
}