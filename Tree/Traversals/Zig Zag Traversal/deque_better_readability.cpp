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
            int size = q.size();
            deque<int> row;

            while(size--)
            {
                TreeNode* curr = q.front();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);

                if(even) row.push_front(curr->val);
                else row.push_back(curr->val);
                q.pop();
            }
            
            even = !even;
            v.push_back(vector<int>(row.begin(), row.end()));
        }
        return v;
    }
};
