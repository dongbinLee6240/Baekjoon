#include <iostream>
using namespace std;
int main()
{
	bool arr[31] = { 0, };

	int n;

	for (int i = 0; i < 28; i++)
	{
		cin >> n;
		if (n < 0 || n>30)
		{
			return 0;
		}
		arr[n] = 1;
	}

	for (int j = 1; j < 30; j++)
	{
		if (arr[j] == 0)
		{
			cout << j << '\n';
		}
	}
	return 0;
}