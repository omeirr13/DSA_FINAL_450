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
        int getHeight(TreeNode* root)
        {
            if(!root) return 0;

            return 1 + max(getHeight(root->left), getHeight(root->right));
        }
        vector<vector<int>> levelOrderBottom(TreeNode* root) {
            if(!root)
            {
                vector<vector<int>> ret;
                return ret;
            }
            vector<vector<int>> v(getHeight(root));
            int i = v.size()-1;

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
                v[i--] = row;
            }

            return v;
        }
    };
