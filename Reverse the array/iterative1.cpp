class Solution
{
    public:
    string reverseWord(string str)
    {
        for(int i = 0;i<str.length()/2;i++)
        {
            int temp = str[i];
            str[i] = str[str.length()-i-1];
            str[str.length()-i-1] = temp;
        }
        return str;
    }
};
