class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double ans;

        double first;
        double second;
        int size = nums1.size() + nums2.size();

        int firstIndex = (size/2)-1;
        int secondIndex = size/2;

        int i = 0, j = 0, pos = 0;

        while(i<nums1.size() && j < nums2.size())
        {
            if(nums1[i] <= nums2[j])
            {
                if(pos == firstIndex) first = nums1[i];
                else if(pos == secondIndex) second = nums1[i];

                i++;
                pos++;
            }
            else
            {
                if(pos == firstIndex) first = nums2[j];
                else if(pos == secondIndex) second = nums2[j];

                j++;
                pos++;
            }
        }
        while(i<nums1.size())
        {
            if(pos == firstIndex) first = nums1[i];
            else if(pos == secondIndex) second = nums1[i];

            i++;
            pos++;
        }
        while(j<nums2.size())
        {
            if(pos == firstIndex) first = nums2[j];
            else if(pos == secondIndex) second = nums2[j];

            j++;
            pos++;
        }

        if(size % 2 == 0)
        {
            return (first+second)/2.0;
        }
        else return second;
    }
};
