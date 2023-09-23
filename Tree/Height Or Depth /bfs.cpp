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
    int maxDepth(TreeNode* root) {
        if(!root) return 0;
        queue<TreeNode*> q;

        TreeNode* curr = root;
        q.push(root);
        int height = 0;
        while(!q.empty())
        {
            int size = q.size();
            for(int i = 0;i<size;i++)
            {
                curr=q.front();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);

                q.pop();                
            }
            height++;
        }
        return height;
    }
};
