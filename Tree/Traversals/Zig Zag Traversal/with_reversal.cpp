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
// 20 9 3
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(!root) return v;

        queue<TreeNode*> q;
        q.push(root);
        bool even = false;

        while(!q.empty())
        {
            vector<int> row;
            int size = q.size();
            while(size--)
            {
                TreeNode* curr = q.front();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);

                row.push_back(curr->val);
                q.pop();
            }
            if(even)
            {
                for(int i = 0;i<row.size()/2;i++)
                {
                    swap(row[i], row[row.size()-i-1]);
                }
            }
            even = !even;
            v.push_back(row);
        }
        return v;
    }
};
