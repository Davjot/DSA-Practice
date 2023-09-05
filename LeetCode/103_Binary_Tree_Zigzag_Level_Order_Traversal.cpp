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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         if(root == NULL)
               return {};
           vector<vector <int>> ans; 
           int flag = 0;
            queue <TreeNode*> q;
            q.push(root);
            TreeNode *temp;
            int len;
            while(!q.empty()){
               len = q.size();
		       vector <int> v(len);
               for(int i = 0; i < len; i++){
                    temp = q.front();
                    q.pop();
                    if (flag) 
                        v[len-1-i] = temp->val;
                    else 
                        v[i] = temp->val;

                   if(temp->left) 
                        q.push(temp->left);
                   if(temp->right) 
                        q.push(temp->right);
                }

		        ans.push_back(v);
                flag = (flag == 0 ? 1 : 0);
            }

          return ans;
        }
};
