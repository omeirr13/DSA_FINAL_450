class Solution {
public:
    int largestRectangleArea(vector<int>& h) {
        stack<int> st;

        vector<int> sl(h.size(), 0);
        vector<int> sr(h.size(), h.size()+1);

        for(int i = 0;i<h.size();i++)
        {
            while(!st.empty() && h[st.top()] >= h[i]) st.pop();

            if(!st.empty())
            {
                sl[i] = st.top()+1;
            }
            st.push(i);
        }
        while(!st.empty()) st.pop();
        for(int i = h.size()-1;i>=0;i--)
        {
            while(!st.empty() && h[st.top()] >= h[i]) st.pop();
            if(!st.empty())
            {
                sr[i] = st.top()+1;
            }
            st.push(i);
        }

        int mx = INT_MIN;

        for(int i = 0;i<h.size();i++)
        {
            mx = max(mx, h[i] * (sr[i] - sl[i] - 1));
        }
        return mx;
    }
};
