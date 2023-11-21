#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
//effh

//Assuming no duplicates
bool isRotationOfOther(string s1, string s2, int index)
{
	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i] != s2[index]) return false;

		index = (index + 1) % s1.length();
	}
	return true;
}
int main()
{
	string s1 = "AACD";
	string s2 = "ACDA";

	vector<int> indeces;
	for (int j = 0; j < s2.length(); j++)
	{
		if (s2[j] == s1[0])
		{
			indeces.push_back(j);
		}
	}

	for (int index : indeces)
	{
		if (isRotationOfOther(s1, s2, index))
		{
			cout << true;
			break;
		}
	}
}


//r     f
//D C A A 
//D C A A
