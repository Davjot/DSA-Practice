// this is single list with deletion nodes at front, last and middle position

#include<iostream>
using namespace std;

class Node{

    public:
        int data;
        Node *next;

        Node(int data){
            this -> data = data;
            this -> next = NULL;
        }

        // destructor
        ~Node(){
            int value = this -> data;
            // memory free
            if(this -> next != NULL){
                delete next;
                this -> next = NULL;
            }
            cout << "Memory is free!" << value << endl;
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

// here is the code for deletion of eleements in linked list 
void deleteNode(int position, Node* &head){
    // deleting the first or start node
    if(position == 1){
        Node *temp = head;
        head = head -> next;
        // memory free start node
        delete temp;
    }
    else{
        // deleting any middle node or last node
        Node *curr = head;
        Node *prev = NULL;

        int count = 1;
        while(count <= position){
            prev = curr;
            curr = curr -> next;
            count++;
        }
        prev -> next = curr -> next;
        curr -> next = NULL;
        delete curr;
    }
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

    deleteNode(3, head);
    print(head);

    return 0;
}