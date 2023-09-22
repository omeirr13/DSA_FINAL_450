
class Solution {
public:
    int binarySearch(vector<int>& arr, int low, int high, int t)
    {
        if(low>high) return -1;

        int mid = low + (high - low) / 2;

        if(arr[mid] == t) return mid;

        else if(t < arr[mid]) return binarySearch(arr, low, mid - 1, t);
        return binarySearch(arr, mid + 1, high, t);
    }
    int search(vector<int>& nums, int target) {
        return binarySearch(nums, 0, nums.size()-1,target);
    }
};
