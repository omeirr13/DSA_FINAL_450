class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        //both are left go left
        TreeNode* curr = root;
        while(curr)
        {
            if(p->val < curr->val && q->val < curr->val){
                curr = curr->left;
            }
            //both are right go right
            else if(p->val >  curr->val && q->val > curr->val)
            {
                curr = curr->right;
            }
            else break;
        }
        return curr;
        //one is left one is right return that node
        // either one is equal to current return that


    }
};
