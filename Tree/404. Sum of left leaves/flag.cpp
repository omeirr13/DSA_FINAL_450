class Solution {
public:
    int helper(TreeNode* root, bool& flag)
    {
        if(!root) return 0;

        if(flag && !root->left && !root->right) return root->val;

        flag = true;
        int left = helper(root->left, flag);
        flag = false;
        int right = helper(root->right, flag);
        return left + right;

    }
    int sumOfLeftLeaves(TreeNode* root) {
        bool flag = false;
        return helper(root, flag);
    }
};
