#include<limits.h>
int findKRotation(vector<int> &arr){
    int low = 0;
    int high = arr.size() - 1;
    
    int mid;
    int mn = INT_MAX;
    int minIndex;
    while(low<=high)
    {
        mid = low + (high - low) / 2;

        if(arr[low] <= arr[mid])
        {
            if(arr[low] < mn)
            {
                minIndex = low;
                mn = arr[low];
            }
            low = mid + 1;
        }
        else
        {
            if(arr[mid]<mn)
            {
                minIndex = mid;
                mn = arr[mid];
            }
            high = mid - 1;
        }

        
    }    
        return minIndex;
}
