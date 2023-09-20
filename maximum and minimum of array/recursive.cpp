class Solution
{
    void getMinAndMax(int A[], int N, int index, int& min, int& max)
    {
        if(index == N) return;
        
        if(A[index] < min) min = A[index];
        if(A[index] > max) max = A[index];
        
        getMinAndMax(A, N, index + 1, min, max);
    }
   public:
    int findSum(int A[], int N)
    {
    	int min = INT_MAX;
    	int max = INT_MIN;
    	
        getMinAndMax(A, N, 0, min, max);
        return min+max;
    }

};
