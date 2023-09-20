class Solution
{
   public:
    int findSum(int A[], int N)
    {
    	int min = INT_MAX;
    	int max = INT_MIN;
    	
    	for(int i = 0;i<N;i++)
    	{
    	    if(A[i]<min)min=A[i];
    	    
    	    if(A[i]>max)max=A[i];
    	}
    	return min+max;
    }

};
