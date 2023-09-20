# Heap

Heaps have a size
Can be represented same a stack

## Identification of Heap:
Look for two keywords:
1) k will be given
2) Smallest or Largest

If these both come in combination, then question is of heap.

## Which Heap to choose?

1. Min Heap &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 2. Max Heap


k + smallest -> max heap
k + largest -> min heap


### Kth Largest Element
We will make a min heap of size k
We will pop smaller elements from top

## Why k given?
all questions of heap are questions of sorting.
If we sort we get nlogn complexity with merge sort.

But if we have k:
we make k size heap, and complexity drops from nlogn to nlogk


### Kth Smallest Element
7 10 4 3 20 15
k = 3

3rd smallest element would be 7

As question is of smallest, we make a max heap.

**If we sort:**
we were asked till kth element, but we sorted the whole array..that is unnecessary.
We don't want to do extra work.

**Max Heap:**
We make it of size k, because hume us se ooper ka koi mtlb ni hai.

So we will sort till size k

which will make it to nlogk

At top always we will have maximum element:<br>
7 10 4 3 20 15
k = 3
<pre>
              10        20     15 
          10   7        7      7
    10    7    4        4      4
7    7    4    3   pop  3 pop  3  pop  


Final:
7
4
3
</pre>
Our answer is at top

As soon as size goes greater than k,
we will get to know that the element at top can not be our answer, because it too large element.
It can never qualify as kth smallest element.

As soon as size > k we pop


# Code
use STL
top, push, pop

Max Heap:
priority_queue<int> maxHeap;

Min Heap:
priority_queue<int, pair<int, vector<int>, greaterInt> minHeap



