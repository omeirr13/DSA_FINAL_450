class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;

        int m = nums1.size(), n = nums2.size();
        vector<double> merged(m+n);

        int i = 0, j = 0, c = 0;
        while(i < m && j < n)
        {
            if(nums1[i] <= nums2[j])
            {
                merged[c] = nums1[i++];
            }
            else
            {
                merged[c] = nums2[j++];
            }
            c++;
        }

        while(i < m)
        {
            merged[c++] = nums1[i++];
        }
        while(j < n)
        {
            merged[c++] = nums2[j++];
        }
        if((n + m) % 2 == 0)
        {
            double avg = (merged[(m+n)/2] + merged[((m+n)/2)-1])/2;
            return avg;
        }
        else
        {
            return merged[(m+n)/2];
        }
    }
};
