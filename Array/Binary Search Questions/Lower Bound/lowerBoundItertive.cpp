int lowerBound(vector<int> arr, int n, int x) {
	//smallest index mtlb left jana
	//x < arr[mid]


	//lowest possible index where arr[x] >= x

	int low = 0;
	int high = n - 1;
	int ans = n;
	while(low <=high)
	{
		int mid = low + (high - low) / 2;
		if(x <= arr[mid])
		{
			ans = mid;
			high = mid - 1;
		}
		else low = mid + 1;
	}
	return ans;
}

