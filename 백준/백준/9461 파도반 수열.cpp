#include <iostream>
#include <vector>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	int res = 0;
	cin >> T;
	vector<int>P(100, 0);
	vector<int>N(T + 1, 0);

	P[1] = 1;
	P[2] = 1;
	P[3] = 1;
	P[4] = 2;
	P[5] = 2;
	P[6] = 3;
	P[7] = 4;
	P[8] = 5;
	P[9] = 7;
	P[10] = 9;

	for (int i = 0; i < T; i++)
	{
		cin >> N[i];

	}

	for (int i = 0; i < T; i++)
	{
		if (N[i] == 0)
		{
			break;
		}

		if (N[i] < 11)
		{
			cout << P[N[i]] << endl;
		}

		else if (N[i] > 10)
		{
			for (int j = 11; j <= N[i]; j++)
			{
				P[j] = P[j - 1] + P[j - 5];
				res = P[j];
			}
			cout << res << endl;
		}

	}

	return 0;
}