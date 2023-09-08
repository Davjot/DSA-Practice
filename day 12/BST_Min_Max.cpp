// This notebook is for getting the minimum and maximum value of data in the BST

#include<iostream>
#include<queue>
using namespace std;

class Node{

    public: 
        int data;
        Node* left;
        Node* right;

        Node(int d){
            this -> data = d;
            this -> left = NULL;
            this -> right = NULL;
        }
};

Node* insertIntoBST(Node* &root, int d){
    if(root == NULL){
        root = new Node(d);
        return root;
    }

    if(d > root -> data){
        root -> right = insertIntoBST(root -> right, d);
    }
    else{
        root -> left = insertIntoBST(root -> left, d);
    }
    return root;
}

void levelOrdertraversal(Node *root){

    queue <Node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        Node *temp = q.front();
        q.pop();

        if(temp == NULL){
            // previous level has been completed
            cout << endl;
            if(!q.empty()){
                // queue still has some child node
                q.push(NULL);
            }
        } 
        else{
            cout << temp -> data << " ";
            if(temp -> left){
                q.push(temp -> left);
            }
            if(temp -> right){
                q.push(temp -> right);
            }
        }
    }
}

// inorder traversal
void inorder(Node *root){
    if(root == NULL){
        return;
    }

    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}

// preorder traversal
void preorder(Node *root){
    if(root == NULL){
        return;
    }

    cout << root -> data << " ";
    preorder(root -> left);
    preorder(root -> right);
}

// postorder traversal
void postorder(Node *root){
    if(root == NULL){
        return;
    }

    preorder(root -> left);
    preorder(root -> right);
    cout << root -> data << " ";
}

Node* minVal(Node* root){
    Node* temp = root;

    while(temp -> left != NULL){
        temp  = temp -> left;
    }
    return temp;
}

Node* maxVal(Node* root){
    Node* temp = root;
    while(temp -> right != NULL){
        temp = temp -> right;
    }
    return root;
}

void takeinput(Node* &root){
    int data;
    cin >> data;

    while(data != -1){
        root = insertIntoBST(root, data);
        cin >> data;
    }
}

int main()
{
    Node* root = NULL;

    cout << "Enter data to create the binary sreach tree : " << endl;
    takeinput(root);

    cout << "Printing the BST : " << endl;
    levelOrdertraversal(root);

    /*
    cout << "Printing Inorder : " << endl;
    inorder(root);

    cout << "Printing Postorder : " << endl;
    postorder(root);

    cout << "Printing Preorder : " << endl;
    preorder(root);
    */

    cout << "Min value is : " << minVal(root) -> data << endl;
    cout << "Max value  is : " << maxVal(root) -> data << endl;
    return 0;
}