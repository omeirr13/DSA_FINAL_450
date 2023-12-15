class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
        int count = 0;
        int i = 0;
        unordered_map<int, int> map;
        vector<int> ans;
        
        for(int j = 0;j<n;j++)
        {
            if(map[A[j]] == 0) count++;
            map[A[j]]++;
            
            if(j - i + 1 == k)
            {
                ans.push_back(count);
                if(map[A[i]] == 1) count--;
                map[A[i]]--;
                i++;
            }
           
        }
        return ans;
    }
};
