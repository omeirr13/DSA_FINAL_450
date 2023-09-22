class Solution {
public:
    int findMin(vector<int>& nums) {
        //find mid
        //check if left part sorted
        //if sorted check if nums[low] < nums[nums.size()-1] if yesh
            //min = 
            // high = mid -1
        int low = 0;
        int high = nums.size() - 1;
        int mn = INT_MAX;
        while(low<=high)
        {
            int mid = low + (high - low) / 2;

            if(nums[low] <= nums[mid])
            {
                mn = min(mn, nums[low]);
                low = mid + 1;
            }
            else
            {
                mn = min(mn, nums[mid]);
                high = mid - 1;
            }
        }
        return mn;
    }
};
