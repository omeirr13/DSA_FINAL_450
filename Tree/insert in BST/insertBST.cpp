class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        TreeNode* temp =root;
        if(!root)
        {
            root=new TreeNode(val);
            return root;
        }
        while(temp)
        {
            if(val < temp->val)
            {
                if(temp->left)
                {
                    temp=temp->left;
                }
                else
                {
                    temp->left = new TreeNode(val);
                    break;
                }
            }
            else if(val > temp->val)
            {
                if(temp->right)
                {
                    temp=temp->right;
                }
                else
                {
                    temp->right = new TreeNode(val);
                    break;
                }
            }
        }
        return root;
    }
};
