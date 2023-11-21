class Solution{
public:	
	
	
	int isPalindrome(string s)
	{
	    string s2(s.length(), '\0');
	    for(int j = s.length() - 1;j>=0;j--)
	    {
	        s2[s.length() - j - 1] = s[j];
	    }
	    if(s2 != s)return 0;
	    return 1;
	}

};
