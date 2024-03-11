#include <iostream>
using namespace std;

int main()
{
	int N;
	int arr[1000001];
	int max;
	int min;

	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	max= arr[0];
	min = arr[0];
	for (int i = 0; i < N; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
		else if (arr[i] < min)
		{
			min = arr[i];
		}
	}
	cout << min << " " << max;
}