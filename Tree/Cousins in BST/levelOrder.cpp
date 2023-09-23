/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    bool isCousins(TreeNode* root, int x, int y) {
        TreeNode* curr = root;
        queue<TreeNode*> q;
        
        q.push(curr);

        TreeNode* xP = nullptr;
        TreeNode* yP = nullptr;
        while(!q.empty())
        {
            curr = q.front();
            int size = q.size();
                //they have to be restted cuz we want to make sure we found em on same level
                xP = nullptr;
                yP = nullptr;
            for(int i = 0;i<size;i++)
            {
                curr = q.front();
                q.pop();
                if(curr->left)
                {
                    q.push(curr->left);
                    if(curr->left->val == x) xP = curr;
                    else if(curr->left->val == y) yP=curr;
                }

                if(curr->right)
                {
                    q.push(curr->right);

                    if(curr->right->val == x) xP=curr;
                    else if(curr->right->val == y) yP= curr;
                }
                if(xP && yP && xP != yP) return true;
            }

            if((!xP && yP) || (xP && !yP)) return false;
        }

        return false;
    }
};
