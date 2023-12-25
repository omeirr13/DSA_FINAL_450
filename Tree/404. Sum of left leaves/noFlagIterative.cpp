class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        TreeNode* curr = root;
        stack<TreeNode*> st;
        
        int ans = 0;

        while(curr || !st.empty())
        {
            while(curr)
            {
                st.push(curr);
                curr = curr->left;
            }

            curr = st.top(); st.pop();
            if(curr->left && !curr->left->left && !curr->left->right) ans+=curr->left->val;
            curr = curr->right;
        }
        return ans;
    }
};
