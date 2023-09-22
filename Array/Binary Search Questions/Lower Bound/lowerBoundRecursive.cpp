
int helper(vector<int>& arr, int low, int high, int x)
{
	if(low>high) return low;
	int mid = low + (high - low) / 2;
	if(x <= arr[mid])
	{
		return helper(arr, low, mid - 1,x);
	}
	return helper(arr, mid+1, high, x);
}
int lowerBound(vector<int> arr, int n, int x) {
	return helper(arr, 0, n-1, x);
}
