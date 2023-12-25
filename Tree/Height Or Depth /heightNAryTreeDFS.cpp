class Solution {
public:
    int maxDepth(Node* root) {
        if(!root) return 0;

        int mx = 0;
        for(int i = 0;i<root->children.size();i++)
        {
            mx = max(mx, maxDepth(root->children[i]));
        }

        return 1 + mx;
    }
};
