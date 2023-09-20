class Solution
{
    public:
    string reverseWord(string str)
    {
        int low = 0;
        int high = str.length() -1 ;
        while(low<high)
        {
            swap(str[low], str[high]);
            low++;
            high--;
        }
        return str;
    }
};
