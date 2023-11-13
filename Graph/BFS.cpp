//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
  public:
    // Function to return Breadth First Traversal of given graph.
    vector<int> bfsOfGraph(int V, vector<int> adj[]) {
        queue<int> q;
        
        vector<bool> visited(V, false);
        q.push(0);
        visited[0] = true;
        vector<int> ans;
        
        while(!q.empty())
        {
            int f = q.front();
            ans.push_back(f);
            
            for(int i : adj[f])
            {
                if(!visited[i])
                {
                    q.push(i);
                    visited[i] = true;
                }
            }
            q.pop();
        }
        return ans;
    }
};

// } Driver Code Ends
