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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int>> v;
        if(!root) return v;

        TreeNode* curr = root;
        queue<TreeNode*> q;
        q.push(curr);

        while(!q.empty())
        {
            int size = q.size();
            vector<int> row;
            for(int i = 0;i<size;i++)
            {
                curr = q.front();
                row.push_back(curr->val);
                q.pop();

                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);
            }
            v.push_back(row);
        }

        for(int i= 0;i<v.size()/2;i++)
        {
            swap(v[i], v[v.size()-i-1]);
        }
        return v;
    }
};
