#include <iostream>

using namespace std;

int main()
{
	int N;
	int K;
	int R=0;
	int cnt = 0;
	int a = 0;

	int arr[10];

	cin >> N >> K;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (int i = N - 1; i >= 0; i--)
	{
		R = (K-a)/ arr[i];  //¸ò
		cnt += R;
		a += arr[i] * R;

		if (K - a == 0)
		{
			break;
		}

	}

	cout << cnt;

	return 0;
}