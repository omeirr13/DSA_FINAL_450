class Solution{
public:	
	
	int helper(string& s, int& index)
	{
	    if(index == s.length() / 2) return 1;
	    
	    if(s[index] != s[s.length() - index - 1]) return 0;
	    index++;
	    return helper(s, index);
	    
	}
	int isPalindrome(string s)
	{
	    int index = 0;
	    return helper(s, index);
	   
	}

};
