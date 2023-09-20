class Solution
{
    public:
    string reverseWord(string str)
    {
        stack<char> st;
        
        for(char ch:str) st.push(ch);
        
        int i = 0;
        while(!st.empty()) 
        {
            str[i++] = st.top();
            st.pop();
        }
        return str;
    }
};
