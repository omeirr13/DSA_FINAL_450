#include<iostream>
using namespace std;


class Solution
{
public:
	int computeNCR(int n, int r)
	{
		int nume = 1;
		int deno = 1;
		int R = r;

		for (int i = 0; i < R; i++)
		{
			nume = nume * (n--);
			deno = deno * (r--);
		}
		return nume / deno;
	}

	int pascal1(int row, int col)
	{
		return computeNCR(row - 1, col - 1);
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
		for (int j = 1; j <= size - i; j++) cout << " ";
		for (int j = 1; j <= i; j++)
		{
			cout << s.pascal1(i, j) << " ";
		}
		cout << endl;
	}
}
