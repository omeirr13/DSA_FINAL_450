#include<iostream>
#include<unordered_map>
using namespace std;



int main()
{
	unordered_map<char, int> map;
	string s = "geeksforgeeks";

	for (char ch : s)
	{
		map[ch]++;
	}

	for (char ch = 'a'; ch <= 'z'; ch++)
	{
		if (map.count(ch) != 0 && map[ch] > 1)
		{
			cout << ch << ", count = " << map[ch] << '\n';
		}
	}
}
