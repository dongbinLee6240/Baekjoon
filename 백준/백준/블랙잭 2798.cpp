#include <iostream>

using namespace std;

int main()
{
	int N;
	int M;
	int card[100];
	int sum;
	int diff;
	int res;

	cin >> N >> M;

	for (int i = 0; i < N; i++)
	{
		cin >> card[i];
	}

	for (int i = 0; i < N - 2; i++)  //diff초기 값을 구하는데 diff가 
	{
		for (int j = i + 1; j < N - 1; j++)
		{
			for (int k = j + 1; k < N; k++)
			{

				diff = M - (card[i] + card[j] + card[k]);

				if (diff > 0)
				{
					break;
				}

			}

			if (diff > 0)
			{
				break;
			}
		}

		if (diff > 0)
		{
			break;
		}
	}

	for (int i = 0; i < N-2; i++)
	{
		for (int j = i + 1; j < N - 1; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				sum = card[i] + card[j] + card[k];

				if (diff > M - sum && (M-sum)>=0)
				{
					diff = M - sum;
					res = sum;
				}

				if (diff == 0)
				{
					break;
				}
			}

			if (diff == 0)
			{
				break;
			}
		}

		if (diff == 0)
		{
			break;
		}
	}

	cout << res;

	return 0;
}