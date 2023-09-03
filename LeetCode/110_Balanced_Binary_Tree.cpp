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

//  brute force : TC : O(n^2)
class Solution {
private:
    int height(TreeNode* root){
        if(root == NULL){
            return 0;
        }

        int left = height(root -> left);
        int right = height(root -> right);
        int ans = max(left, right) + 1;
        return ans;
    }    
public:
    bool isBalanced(TreeNode* root) {
        if(root == NULL){
            return true;
        }

        bool left = isBalanced(root -> left);
        bool right = isBalanced(root -> right);
        bool diff = abs(height(root -> left) - height(root -> right)) <= 1;

        if(left && right && diff){
            return 1;
        }
        else{
            return false;
        }
    }
};

// TC; O(n)
class Solution{
public:
    pair<int, int> isBalancedFast(TreeNode* root){
        if(root == NULL){
            pair<bool, int> p = make_pair(true, 0);
            return p;
        }

        pair<int, int> left = isBalancedFast(root -> left);
        pair<int, int> right = isBalancedFast(root -> right);

        bool leftAns = left.first; // first -> whether tree is balanced or not
        bool rightAns = right.first;

        bool diff = abs(left.second - right.second) <= 1; // second -> return height of tree

        pair<bool, int> ans;
        ans.second = max(left.second, right.second) + 1;

        if(leftAns && rightAns && diff){
            ans.first = true;
        }
        else{
            ans.first = false;
        }
        return ans;
    }

    bool isBalanced(TreeNode* root){
        return isBalancedFast(root).first;
    }
};
