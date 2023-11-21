class Solution {
public:
    void helper(vector<char>& s, int& low, int& high)
    {
        if(low >= high) return;

        swap(s[low++], s[high--]);
        helper(s, low, high);
    }
    void reverseString(vector<char>& s) {
        int low = 0, high = s.size() - 1;
        helper(s, low, high);
    }
};
