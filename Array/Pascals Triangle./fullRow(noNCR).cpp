#include<iostream>
using namespace std;


class Solution
{
public:
	void pascal2(int row)
	{
		cout << 1 << " ";
		int curr = 1;

		int n = 1;
		int c = row - 1;
		for (int i = 0; i < row-1; i++)
		{
			curr *= c;
			curr /= n;
			n++;
			c--;
			cout << curr << " ";
		}

		cout << " ";
	}
};
int main()
{
	Solution s;
	int size;
	cout << "enter size: ";
	cin >> size;
	cout << endl;

	for (int i = 1; i <= size; i++)
	{
		s.pascal2(i);
		cout << endl;
	}
}
