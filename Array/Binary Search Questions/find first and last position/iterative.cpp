class Solution {
public:
    int firstOccurence(vector<int>& nums , int target)
    {
        //have to find smallest index such that nums[mid] equal to target
        //as we have to jut go left we can combine this with following condition:
        //target <= nums[mid]
        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;
        while(low<=high)
        {
            int mid = low + (high - low) / 2;
            if(target <= nums[mid]) 
            {
                if(target == nums[mid])
                ans = mid;
                high = mid - 1;
            }
            else low = mid + 1;
        }
        return ans;
    }

    int lastOccurence(vector<int>& nums, int target)
    {
        //essentially just hev to find greatest index equal to target
        //as we go right in this condition
        //target > nums[mid] just comibine and add an iff

        int low = 0;
        int high = nums.size() - 1;
        int ans = -1;
        while(low<=high)
        {
            int mid = low + (high - low) / 2;

            if(target >= nums[mid])
            {
                if(target == nums[mid])
                ans=mid;
                low = mid + 1;
            }
            else high = mid - 1;
        }
        return ans;
    }
    vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> ret = {firstOccurence(nums, target), lastOccurence(nums, target)};
        return ret;
    }
};
