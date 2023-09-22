# pivot selection

1) random
2) median
3) 1st element
4) last element


# Time Complexity:

## Worst Case:
O(n^2)
The cases where pivot always become the smallest or the largest element.

This is when array is sorted in ascending(largest) or descending(smallest).

So if sorted array, and we take last element as pivot we get O(n^2)


## Average:
O(nlogn)
