class Solution {
public:
    vector<int> findMode(TreeNode* root) {
        unordered_map<int, int> map;
        TreeNode* curr = root;

        stack<TreeNode*> st;
        int mx = INT_MIN;
        while(curr || !st.empty())
        {
            while(curr)
            {
                st.push(curr);
                curr = curr->left;
            }

            curr = st.top(); st.pop();
            map[curr->val]++;
            mx = max(mx, map[curr->val]);

            curr = curr->right;
        }
        vector<int> ans;
        for(auto p : map)
        {
            if(p.second == mx)
            {
                ans.push_back(p.first);
            }
        }
        return ans;
    }
};
