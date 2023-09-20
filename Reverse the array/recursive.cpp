class Solution
{
    void helper(string& str, int index)
    {
        if(index==str.length()/2)return;
        
        swap(str[index], str[str.length()-index-1]);
        helper(str, index+1);
    }
    public:
    string reverseWord(string str)
    {
        //s k e e G
        helper(str, 0);
        return str;
    }
};
