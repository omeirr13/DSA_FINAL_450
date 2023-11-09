class Solution {
public:
    int trap(vector<int>& height) {
        int left = 0;
        int right = height.size() - 1;

        int mL = INT_MIN, mR = INT_MIN, count = 0;

        while(left < right)
        {
            if(height[left] <= height[right])
            {
                if(height[left] > mL)
                {
                    mL = height[left];
                }
                else if(height[left] < mL)
                {
                    count += mL - height[left];
                }
                left++;
            }
            else
            {
                if(height[right] > mR)
                {
                    mR = height[right];
                }
                else if(height[right] < mR)
                {
                    count += mR - height[right];
                }

                right--;
            }
        }

        return count;
    }
};
