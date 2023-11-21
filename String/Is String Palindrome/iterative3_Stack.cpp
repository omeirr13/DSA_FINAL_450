class Solution{
public:	
	
	
	int isPalindrome(string s)
	{
	    stack<char> st;
	    
	    for(char ch : s) st.push(ch);
	    
	    int i = 0;
	    while(!st.empty())
	    {
	        if(st.top() != s[i]) return 0;
	        st.pop();
	        i++;
	    }
	    return 1;
	}

};
