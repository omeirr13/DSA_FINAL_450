class Solution {
public:
    int maxDepth(Node* root) {
        Node* curr = root;
        queue<Node*> q;

        q.push(curr);
        int ans = 0;
        if(!root) return ans;
        int l = 0;
        while(!q.empty())
        {
            int size = q.size();
            l++;
            ans = max(ans, l);
            while(size--)
            {
                curr = q.front();
                q.pop();
                for(auto child : curr->children)
                {
                    q.push(child);
                }
            }
        }
        return ans;
    }
};
