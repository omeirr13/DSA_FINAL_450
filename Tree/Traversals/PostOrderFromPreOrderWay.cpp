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
    vector<int> postorderTraversal(TreeNode* root) {
         vector<int> v;
        if(!root) return v;
        stack<TreeNode*> st;

        st.push(root);
        while(!st.empty())
        {
            root = st.top();
            st.pop();
            v.push_back(root->val);

            if(root->left) st.push(root->left);
            if(root->right) st.push(root->right);
        }

        for(int i = 0;i<v.size()/2;i++)
        {
            swap(v[i], v[v.size()-i-1]);
        }
        return v;
    }
};
