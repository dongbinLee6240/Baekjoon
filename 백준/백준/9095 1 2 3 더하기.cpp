#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;
	vector <int> n(T, 0);
	vector <int> dp(11, 0);

	dp[1] = 1;
	dp[2] = 2;
	dp[3] = 4;

	int result = 0;

	for (int i = 0; i < T; i++)
	{
		cin >> n[i]; //입력
		if (n[i] == 1)
		{
			cout << 1 << endl;
		}
		else if (n[i] == 2)
		{
			cout << 2 << endl;
		}
		else if (n[i] == 3)
		{
			cout << 4 << endl;
		}
		else
		{
			for (int j = 4; j < n[i] + 1; j++) //입력 값 가짓수
			{
				dp[j] = dp[j - 1] + dp[j - 2] + dp[j - 3];
				result = dp[j];
			}
			cout << result << endl;
		}

	}

	return 0;
}