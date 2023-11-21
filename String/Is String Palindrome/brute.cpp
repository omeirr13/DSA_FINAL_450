class Solution{
public:	

	int isPalindrome(string s)
	{
	    for(int i = 0;i<s.length();i++)
	    {
	        for(int j = i;j<s.length();j++)
	        {
	            if(j == s.length()-i-1)
	            {
	                if(s[j] != s[i]) return 0;
	            }
	        }
	    }
	    return 1;
	   
	}

};
