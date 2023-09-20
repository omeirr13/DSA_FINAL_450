class Solution {
public:
    bool dfs(TreeNode* root, int& cnt)
    {   
        if(!root) return false;

        bool left = dfs(root->left , cnt);
        if(left) return true;
        if(cnt == 1)
        {
            cnt = root->val;
            return true;
        }
        cnt--;
        return dfs(root->right, cnt);
        
    }
    int kthSmallest(TreeNode* root, int k) {
        int count = k;
        dfs(root, count);
        return count;
    }
};
