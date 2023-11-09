class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        // Brute Force solution easy pz
        int mxArea = INT_MIN;
        for(int i = 0;i<heights.size();i++)
        {
            int currLength = 0;
            int currHeight = heights[i];

            for(int j = 0;j<heights.size();j++)
            {
                if(heights[j] >= currHeight)
                {
                    currLength++;
                }
                else
                {
                    currLength = 0;
                }
            mxArea = max(mxArea, currLength * currHeight);
            }
            cout << currLength*currHeight<<endl;
        }
        return mxArea;
    }
};
