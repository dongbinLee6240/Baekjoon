#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);

	int T;
	int N, M, K;
	cin >> T;

	for (int i = 0; i < T; i++)
	{
		int tmp = 0;
		int result = 0;
		cin >> N >> M >> K;
		while (1)
		{
			if (K == 1 && M < N)
			{
				result = -1;
				break;
			}

			if (N > M * K)
			{
				N -= M * K;
				tmp = M;
				M = 0;
				result += 1;
			}

			if (M == 0)
			{
				M = tmp;
				result += 1;
			}

			if (N <= M * K)
			{
				result += 1;
				N -= M * K;
			}

			if (N <= 0)
			{
				break;
			}
		}
		cout << result<<'\n';
	}
	
	return 0;
}