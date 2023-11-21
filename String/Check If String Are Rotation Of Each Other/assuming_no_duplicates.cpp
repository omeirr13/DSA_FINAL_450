#include<iostream>
#include<algorithm>
#include<unordered_map>
using namespace std;
//effh

//Assuming no duplicates
bool isRotationOfOther(string s1, string s2)
{
	if (s1.length() != s2.length()) return false;

	int j = 0;
	for (j; j < s2.length(); j++)
	{
		if (s2[j] == s1[0]) break;
	}

	for (int i = 0; i < s1.length(); i++)
	{
		if (s1[i] != s2[j]) return false;

		j = (j + 1) % s1.length();
	}
	return true;
}
int main()
{
	string s1 = "ABCD";
	string s2 = "CDAB";


	cout << isRotationOfOther(s1, s2);
}


//r     f
//D C A A 
//D C A A
