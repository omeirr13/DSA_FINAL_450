class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> v;
        if(!root) return v;

        queue<TreeNode*> q;
        q.push(root);
        bool even = false;

        while(!q.empty())
        {
            int size = q.size();
            int index = ((even) ? size - 1: 0);
            vector<int> row(size);

            while(size--)
            {
                TreeNode* curr = q.front();
                if(curr->left) q.push(curr->left);
                if(curr->right) q.push(curr->right);

                if(even) row[index--] = curr->val;
                else row[index++] = curr->val;
                q.pop();
            }
            
            even = !even;
            v.push_back(row);
        }
        return v;
    }
};
