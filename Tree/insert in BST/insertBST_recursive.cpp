class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(!root)
        {
            TreeNode* insert = new TreeNode(val);
            return insert;
        }

        if(val<root->val)
        {
            root->left = insertIntoBST(root->left, val);
        }
        else if(val>root->val)
        {
            root->right = insertIntoBST(root->right, val);
        }
        return root;
    }
};
