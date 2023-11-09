int findMaxFruits(vector<int> &arr, int n) {
    // just find longest substring
    //with atmost two unique values.

    unordered_map<int, int> map;

    int mx = INT_MIN;

    int i = 0;
    for(int j = 0;j<arr.size();j++)
    {
        map[arr[j]]++;
        while(map.size() > 2)
        {
            map[arr[i]]--;
            if(map[arr[i]] == 0)
            {
                map.erase(arr[i]);
            }
            i++;
        }

        mx = max(mx, j - i + 1);
    }
    return mx;
}
