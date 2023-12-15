class Solution{
  public:
    vector <int> countDistinct (int A[], int n, int k)
    {
       unordered_map<int, int> map;
       vector<int> ans;
       int i =0;
       for(int j = 0;j<n;j++)
       {
           map[A[j]]++;
           if(j - i + 1 == k)
           {
               ans.push_back(map.size());
               map[A[i]]--;
            
               if(map[A[i]] == 0)
               {
                   map.erase(A[i]);
               }
               i++;
           }
       }
       return ans;
    }
};
