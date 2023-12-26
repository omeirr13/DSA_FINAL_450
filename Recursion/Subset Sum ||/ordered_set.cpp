class Solution {
public:
    void helper(vector<int>& nums, set<vector<int>>& ans, vector<int>& v, int& curr)
    {
        if(curr == nums.size())
        {
            ans.insert(v);
            return;
        }

        //not pick
        helper(nums, ans, v, ++curr);

        v.push_back(nums[--curr]);

        helper(nums, ans, v, ++curr);
        v.pop_back();
        --curr;
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        set<vector<int>> ansSet;
        vector<int> v = {};
        int curr = 0;
        helper(nums, ansSet, v, curr);

        vector<vector<int>> ans;
        for(auto v : ansSet)
        {
            ans.push_back(v);
        }
        return ans;
    }
};
