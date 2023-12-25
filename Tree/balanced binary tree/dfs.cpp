class Solution {
public:
    int helper(TreeNode* root)
    {
        if(!root) return 0;

        int left = helper(root->left);
        int right = helper(root->right);

        if(left == -1 || right == -1) return -1;

        if(abs(right - left) > 1) return -1;
        return 1  + max(left, right);
    }
    bool isBalanced(TreeNode* root) {
        if(helper(root) == -1) return false;
        return true;
    }
};
