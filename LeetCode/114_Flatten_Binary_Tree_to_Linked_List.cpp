/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector <int> x;
    void inorder(TreeNode* root){
        if(root == NULL){
            return ;
        }

        x.push_back(root -> val);
        inorder(root -> left);
        inorder(root -> right);
    }

    void flatten(TreeNode* root) {
        inorder(root);
        for(int i = 1; i < x.size(); i++){
            if(root -> right != NULL && root -> left != NULL){
                root -> right -> val = x[i];
                root -> left = NULL;
            }
            else if(root -> right != NULL){
                root -> right -> val = x[i];
            }
            else if(root -> right == NULL && root -> left != NULL){
                TreeNode* p = new TreeNode(x[i]);
                root -> right = p;
                root -> left = NULL;
            }
            else{
                TreeNode* p = new TreeNode(x[i]);
                root -> right = p;
            }
            root = root -> right;
        }
    }
};
