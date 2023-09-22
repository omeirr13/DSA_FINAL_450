# Quick Sort

Quick sort is algorithm of **divide and conquer**.

The problem of sorting an array, is reduced to problem of sorting two smaller sets.

## Working Logic:

<pre>
  0  1  2  3  4  5  6  7  8  9  10 11
  44 33 11 55 77 90 40 60 99 22 88 66
</pre>

## Quick Procedure:
The array which is given to this procedure, the first value of the array will be taken to its right place, and all values smaller
than it will be on left and all values greater than it will be on right.

Giving this array to quick procedure we get:
<pre>
  0  1  2  3  4  5  6  7  8  9  10 11
  44 33 11 55 77 90 40 60 99 22 88 66
</pre>
Values smaller than 42: 33 11 40 22

33 11 40 22 **44** 55 77 90 60 99 88 66
This will half our array,
and we will repeat quick procedure on both sub arrays and so on


## Quick Sort:
We will have a loop that will call quick procedure repeatedly.
Each time quick procedure will give two sublists which will be noted down.
Then quick will be called for both of the sub arrays.


<pre>
  QUICK(ARR, N, BEG, END, LOC)
  
  0  1  2  3  4  5  6  7  8  9  10 11
  44 33 11 55 77 90 40 60 99 22 88 66

  N = 12
  beg = 0
  end = 11
  loc = 0//always point to current element we are taking to right position


  LEFT = 0
  RIGHT = 11

    WHILE(A[loc]<=A[right]) RIGHT--;//right pe bare aane chahye

  
    SWAP(A[right], A[loc])
    loc = right;
    WHILE(A[left] <= A[loc]) LEFT++; //left pe chote aane chahye
  
    SWAP(A[left], A[loc])
    REPEAT UNTIL left 
  
</pre>
