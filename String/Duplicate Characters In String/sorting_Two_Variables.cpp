#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
//effh

int main()
{
	string s = "geeksforgeeks";
	sort(s.begin(), s.end());
	cout << endl<<s;
	char curr = s[0];
	
	int i = 0;
	int j = 0;
	while (j < s.length())
	{
		while (j < s.length() && s[j] == curr)
		{
			j++;
		}
		 
		if (j - i > 1)
		{
			cout << s[i] << ", count = " << j - i << '\n';
		}
		i = j;
		if(i < s.length()) curr = s[i];
	}
}
