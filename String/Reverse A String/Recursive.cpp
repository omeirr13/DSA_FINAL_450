class Solution {
public:
    void helper(vector<char>& s, int& index)
    {
        if(index == s.size()/2) return;

        swap(s[index], s[s.size() - index - 1]);
        helper(s, ++index);
    }
    void reverseString(vector<char>& s) {
        int index = 0;
        helper(s, index);
    }
};
