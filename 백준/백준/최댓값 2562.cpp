#include <iostream>

using namespace std;

int main()
{
	int N[8];
	int max;
	int index;

	for (int i = 0; i < 9; i++)
	{
		cin >> N[i];
		max = N[0];
		if (N[i] > max)
		{
			max = N[i];
			index = i;
		}
	}

	cout << max << '\n';
	cout << index;

	return 0;
}