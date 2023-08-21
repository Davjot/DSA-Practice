// this is single list with inserting nodes at front, last and middle position

#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node *next;

        // constructor
        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }
};

// insertion at the head element of the linked list
void InsertAtHead(Node* &head, int d){
    // new node created
    Node *temp = new Node(d);
    temp -> next = head;
    head = temp;
}

// insertion at the tail element of the linked list
void InsertAtTail(Node* &tail, int d){
    Node *temp = new Node(d);
    tail -> next = temp;
    tail = temp;
}

// insert an element at any position
void InsertAtPosition(Node* &head, Node* &tail, int position, int d){

    if(position == 1){
        InsertAtHead(head, d);
        return;
    }

    Node *temp = head;
    int count = 1;

    while(count < position - 1){
        temp = temp -> next;
        count++;
    }

    // inserting at last position
    if(temp -> next == NULL){
        InsertAtTail(tail, d);
        return;
    }

    // creating a node for d
    Node *nodeToinsert = new Node(d);

    nodeToinsert -> next = temp -> next;

    temp -> next = nodeToinsert;
}

// traverse a linked list
void print(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;

}

int main()
{
    // created a node in the linked list
    Node *node1 = new Node(10);

    // head pointed to node
    Node *head = node1;
    Node *tail = node1;
    print(head);

    InsertAtHead(head, 12);
    print(head);

    InsertAtTail(tail, 15);
    print(head);

    InsertAtPosition(head, tail, 3, 22);
    print(head);

    cout << "head : " << head -> data << endl;
    cout << "tail : " << tail -> data << endl;

    return 0;
}