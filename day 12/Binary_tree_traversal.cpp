// there are three types of traversal : Postorder; Inorder ; Preorder

#include<iostream>
#include<queue>

using namespace std;
class node{

    public:
        int data;
        node *left = NULL;
        node *right = NULL;

    node(int d){
        this -> data = d;
        this -> right = NULL;
        this -> left = NULL;
    }
};

node* buildTree(node *root){

    int data;

    cout << "Enter the data : " << endl;
    cin >> data;

    root = new node(data);

    if(data == -1){
        return NULL;
    }

    cout << "Enter the data for inserting in left of tree : " << data << endl;
    root -> left = buildTree(root -> left);

    cout << "Enter the data for inserting in right of tree : " << data << endl;
    root -> right = buildTree(root -> right);
    return root;
}

void levelOrdertraversal(node *root){

    queue <node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()){
        node *temp = q.front();
        q.pop();

        if(temp = NULL){
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
void inorder(node *root){
    if(root == NULL){
        return;
    }

    inorder(root -> left);
    cout << root -> data << " ";
    inorder(root -> right);
}

// preorder traversal
void preorder(node *root){
    if(root == NULL){
        return;
    }

    cout << root -> data << " ";
    preorder(root -> left);
    preorder(root -> right);
}

// postorder traversal
void postorder(node *root){
    if(root == NULL){
        return;
    }

    preorder(root -> left);
    preorder(root -> right);
    cout << root -> data << " ";
}

using namespace std;
int main()
{
    node *root = NULL;

    // creation of tree
    root = buildTree(root);

    cout << "Printing the level order traversal order of the tree : " << endl;
    levelOrdertraversal(root);

    cout << "Inorder traversal is : " << endl;
    inorder(root);

    cout << "Preorder traversal is : " << endl;
    preorder(root);

    cout << "Postorder traversal is : " << endl;
    postorder(root);
    return 0;
}