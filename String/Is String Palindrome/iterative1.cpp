//User function template for C++
class Solution{
public:	
	
	
	int isPalindrome(string s)
	{
	    int low = 0;
	    int high = s.length() - 1;
	    
	    while(low < high)
	    {
	        if(s[low++] != s[high--]) return 0;
	    }
	    return 1;
	}

};
