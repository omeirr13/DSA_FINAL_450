class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        stack<TreeNode*> st;
        TreeNode* curr = root;

        st.push(curr); st.push(curr);

        while(!st.empty())
        {
            TreeNode* t1 = st.top(); st.pop();
            TreeNode* t2 = st.top(); st.pop();

            if(!t1 && !t2) continue;
            if(!t1 || !t2) return false;
            if(t1->val != t2->val) return false;

            st.push(t1->left);
            st.push(t2->right);

            st.push(t1->right);
            st.push(t2->left);
        }
        return true;
    }
};
