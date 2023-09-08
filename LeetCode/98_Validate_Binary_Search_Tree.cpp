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
    bool solve(TreeNode* root, long min, long max){
        if(root == NULL)   
            return true;
        
        if(root -> val <= min || root -> val >= max)  
            return false;
        
        return solve(root -> left, min, root -> val) && solve(root -> right, root -> val, max);
    }

    bool isValidBST(TreeNode* root) {
        return solve(root, LONG_MIN, LONG_MAX);
    }
};

// Approach 2: as inorder traversal always gives sorted array and then we check its validity
class Solution {
public:
    void inorder(TreeNode *root, vector<int> &ans){
        if(root == NULL)
            return;
        
        inorder(root->left, ans);
        ans.push_back(root->val);
        inorder(root->right, ans);
    }

    bool isValidBST(TreeNode* root) {
        vector<int> ans;
        inorder(root, ans);

        for(int i=1; i<ans.size(); i++){
            if(ans[i] <= ans[i-1])
                return false;
        }
        return true;
    }
};
