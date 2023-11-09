class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0, right = height.size() - 1, count = 0, mL = INT_MIN, mR = INT_MIN;
        while(left < right)
        {
            if(height[left] <= height[right])
            {
                if(height[left] >= mL) mL = height[left++];
                else count += mL - height[left++];
            }
            else
            {
                if(height[right] >= mR) mR = height[right--];
                else count += mR - height[right--];
            }
        }

        return count;
    }
};
