#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int n;
	vector<int> dp(1000, 0);
	cin >> n;

	dp[1] = 1;
	dp[2] = 2;

	for (int i = 3; i <= n; i++)
	{
		dp[i] = (dp[i - 1] + dp[i - 2]) % 10007;
	}

	cout << dp[n];

	return 0;
}