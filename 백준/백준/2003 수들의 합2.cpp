#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N;
	int M;
	int cnt = 0;
	cin >> N >> M;
	vector<int>seq(N);
	for (int i = 0; i < N; i++)
	{
		cin >> seq[i];
	}

	int start = 0;
	int end = 0;
	int sum = seq[0];

	while (end < N)
	{
		if (sum < M)
		{
			end += 1;
			if (end < N)
			{
				sum += seq[end];
			}
		}

		else if (sum > M)
		{
			sum -= seq[start];
			start+=1;
		}

		else if (sum == M)
		{
			cnt += 1;
			sum -= seq[start];
			start += 1;
			end += 1;

			if (end < N)
			{
				sum += seq[end];
			}
		}
	}
	cout << cnt;
	return 0;
}