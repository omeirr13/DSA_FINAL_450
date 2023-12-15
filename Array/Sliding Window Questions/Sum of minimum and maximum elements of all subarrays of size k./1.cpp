#include <bits/stdc++.h> 
long long sumOfMaxAndMin(vector<int> &nums, int n, int k) {
	list<int> dequeMax;
	list<int> dequeMin;


	int i = 0;
	long long ans = 0;
	for(int j = 0;j<nums.size();j++)
	{
		while(!dequeMax.empty() && i > dequeMax.front()) dequeMax.pop_front();		
		while(!dequeMin.empty() && i > dequeMin.front()) dequeMin.pop_front();

		while(!dequeMax.empty() && nums[j] > nums[dequeMax.back()]) dequeMax.pop_back();
		while(!dequeMin.empty() && nums[j] < nums[dequeMin.back()]) dequeMin.pop_back();
		
		dequeMax.push_back(j);
		dequeMin.push_back(j);
		if(j - i + 1 == k) 
		{
			ans += (nums[dequeMax.front()] + nums[dequeMin.front()]);
			i++;
		}

		
	}
	return ans;
}
