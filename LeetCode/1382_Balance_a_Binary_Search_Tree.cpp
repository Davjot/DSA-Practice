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
    vector <TreeNode*> inorder;

    void buildInorder(TreeNode* root){
        if(!root){
            return ;
        }

        buildInorder(root -> left);
        inorder.push_back(root);
        buildInorder(root -> right);
    }

    TreeNode* balanceTree(TreeNode* root, int s, int e){
        if(s > e){
            return NULL;
        }
        int mid = (s + e) / 2;
        root = inorder[mid];
        root -> left = balanceTree(root -> left, s, mid - 1);
        root -> right = balanceTree(root -> right, mid + 1, e);
        return root;
    }

    TreeNode* balanceBST(TreeNode* root) {
        buildInorder(root);
        return balanceTree(root, 0, inorder.size() - 1);
    }
};
