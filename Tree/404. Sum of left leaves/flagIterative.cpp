class Solution {
public:
    int sumOfLeftLeaves(TreeNode* root) {
        TreeNode* curr = root;
        stack<TreeNode*> st;
        bool flag = false;
        
        int ans = 0;

        while(curr || !st.empty())
        {
            while(curr)
            {
                if(curr->left)
                    flag = true;
                st.push(curr);
                curr = curr->left;
            }
            
            curr = st.top(); st.pop();
            if(flag && !curr->left && !curr->right) ans += curr->val;
            flag = false;
            curr = curr->right;
        }
        return ans;
    }
};
