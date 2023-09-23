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
    TreeNode* invertTree(TreeNode* root) {
        if(!root) return root;

        TreeNode* curr = root;
        queue<TreeNode*> q;
        q.push(root);

        vector<int> levelOrder;
        while(!q.empty())
        {
                curr = q.front();
                q.pop();
                if(curr->left)
                {
                    q.push(curr->left);
                    levelOrder.push_back(curr->left->val);
                }
                else levelOrder.push_back(-1000);

                if(curr->right)
                {
                    q.push(curr->right);
                    levelOrder.push_back(curr->right->val);
                }
                else levelOrder.push_back(-1000);
        }

        TreeNode* root1 = new TreeNode(root->val);
        q.push(root1);
        int i = 0;

        while(!q.empty())
        {
            curr = q.front();
            q.pop();
            
            if(levelOrder[i] == -1000)
            {
                curr->right = nullptr;
            }
            else
            {
                curr->right = new TreeNode(levelOrder[i]);
                q.push(curr->right);
            }
            i++;

            if(levelOrder[i] == -1000)
            {
                curr->left = nullptr;
            }
            else
            {
                curr->left = new TreeNode(levelOrder[i]);
                q.push(curr->left);
            }
            i++;

        }
        return root1;

    }
};
