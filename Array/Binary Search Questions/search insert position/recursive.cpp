class Solution {
public:
    int helper(vector<int>& nums, int low, int high, int target)
    {
        if(low>high) return low;

        int mid = low + (high - low)/2;
        if(target<=nums[mid]) return helper(nums,low, mid-1, target);
        return helper(nums, mid+1, high, target);
    }
    int searchInsert(vector<int>& nums, int target) {
        //i have to find the smallest index which is greater than target
        //condition would be ig: if(target < nums[i])

        return helper(nums, 0, nums.size()-1, target);
    }
};
