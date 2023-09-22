class Solution {
public:
    int search(vector<int>& arr, int target) {
        //get mid
        //check if left side of mid is sorted if yes
            // check if target lies in that area or not if yes
                //high = mid - 1
            //else low = mid + 1
        
        //else right side sorted
            //check if target lies there if yes
                //low = mid + 1
            //else high = mid - 1

        int low = 0;
        int high = arr.size()-1;

        while(low<=high)
        {
            int mid = low +(high-low)/2;

            if(arr[mid]==target) return mid;
            //agr equal ni lgaya same low and mid wont converge
            if(arr[0] <= arr[mid])//left side sorted
            {
                if(target >= arr[0] && target <= arr[mid]) high = mid - 1;
                else low = mid + 1;
            }
            else//right side sorted
            {
                if(target >= arr[mid] && target <= arr[high]) low = mid + 1;
                else high = mid - 1;
            }
        }
        return -1;
    }
};
