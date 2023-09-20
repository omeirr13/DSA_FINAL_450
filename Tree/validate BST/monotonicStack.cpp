class Solution {
public:
    void helper(TreeNode* root, vector<int>& v)
    {
        if(!root) return;
        helper(root->left, v);
        v.push_back(root->val);
        helper(root->right, v);
    }
    bool isValidBST(TreeNode* root) {
        vector<int> v;
        helper(root, v);

        stack<int> st;

        for(int i = v.size()-1;i>=0;i--)
        {
            while(!st.empty() && st.top() > v[i]) st.pop();
            if(!st.empty()) return false;
            st.push(v[i]);
        }
        return true;

    }
};
