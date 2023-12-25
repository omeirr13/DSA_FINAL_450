class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*> q;
        TreeNode* curr = root;
        q.push(root);
        q.push(root);
        //
        while(!q.empty())
        {
            int size = q.size();
            while(size)
            {
                TreeNode* f1 = q.front(); q.pop();
                TreeNode* f2 = q.front(); q.pop();

                if(!f1 && !f2)
                {
                    size -= 2;
                    continue;
                }
                if(!f1 || !f2) return false;
                if(f1->val != f2->val) return false;

                q.push(f1->left);
                q.push(f2->right);

                q.push(f1->right);
                q.push(f2->left);

                size -= 2;
            }
        }
        return true;
    }
};
