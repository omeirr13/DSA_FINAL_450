#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
//effh

int main()
{
	string s = "geeksforgeeks";
	if (s.length() == 1) exit(0);
	sort(s.begin(), s.end());
	int i = 0;
	while (i < s.length())
	{
		int count = 1;
		while (i < s.length() - 1 && s[i] == s[i+1])
		{
			count++;
			i++;
		}
		 
		if (count > 1)
		{
			cout << s[i] << ", count = " << count << '\n';
		}
		i++;
	}
}
