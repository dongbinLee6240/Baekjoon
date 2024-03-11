#include <iostream>
using namespace std;

int main()
{
	int arr[100];
	int N;
	int idx;
	int cnt=0;

	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	cin >> idx;

	for (int i = 0; i < N; i++)
	{
		if (arr[i] == idx)
		{
			cnt++;
		}
	}

	cout << cnt;

	return 0;
}