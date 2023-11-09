class Solution {
public:
    int trap(vector<int>& height) {
        vector<int> rm(height.size());
        vector<int> lm(height.size());

        int mx = -1;
        for(int i = 0;i<height.size();i++)
        {   
            lm[i] = mx;
            mx = max(mx, height[i]);
        }
        mx = -1;
        for(int i = height.size() - 1;i>=0;i--)
        {
            rm[i] = mx;
            mx = max(mx, height[i]);
        }

        int count = 0;
        for(int i = 0;i<height.size();i++)
        {
            if(rm[i] == -1 || lm[i] == -1) continue;
            int mn = min(rm[i], lm[i]);

            if(mn > height[i])
            {
                count += mn - height[i];
            }
        }
        return count;
    }
};
