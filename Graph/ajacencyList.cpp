vector < vector < int >> printAdjacency(int n, int m, vector < vector < int >> & edges) {
    vector<vector<int>> list(n, vector<int>());
    for(int i = 0;i<n;i++)
    {
        list[i].push_back(i);
    }
    for(int i = 0;i<m;i++)
    {
        int u = edges[i][0];
        int v = edges[i][1];

        // Ensure vertices are within the valid range
        list[u].push_back(v);        
        list[v].push_back(u);

    }
    return list;
}
