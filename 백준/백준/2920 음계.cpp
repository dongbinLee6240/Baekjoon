#include <iostream>

using namespace std;

int main()
{
	int arr[8];

	int cnt = 0;
	int rcnt = 0;

	for (int i = 0; i < 8; i++)
	{
		cin >> arr[i];
	}

	for (int j = 0; j < 8; j++)
	{
		if (cnt == 7)
			break;

		if (rcnt == 7)
			break;

		if (arr[j] - arr[j + 1] == -1)
		{
			cnt += 1;
		}

		else if (arr[j] - arr[j + 1] == 1)
		{
			rcnt += 1;
		}
		else
		{
			cout << "mixed";
			break;
		}
	}

	if (cnt == 7)
	{
		cout << "ascending";
	}

	if (rcnt == 7)
	{
		cout << "descending";
	}

	return 0;
}