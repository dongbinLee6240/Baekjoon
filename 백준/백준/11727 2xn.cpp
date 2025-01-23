//#include <iostream>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//
//	int n;
//	cin >> n;
//	vector<int> dp(n+1,0);
//
//	dp[0] = 1;
//	dp[1] = 1;
//	dp[2] = 3;
//
//	if (n == 1 || n==2)
//	{
//		cout << dp[n] % 10007;
//	}
//	else if (n > 1)
//	{
//		for (int i = 3; i <= n; i++)
//		{
//			dp[i] = dp[i - 1] + 2 * dp[i - 2];
//		}
//		cout << dp[n] % 10007;
//	}
//
//	return 0;
//}

#include <iostream>
using namespace std;

int d[1001];

int main()
{
    int N;
    cin >> N;

    d[1] = 1;
    d[2] = 3;
    for (int i = 3; i <= N; i++) {
        d[i] = d[i - 1] + 2 * d[i - 2];
        d[i] = d[i] % 10007;
    }
    cout << d[N];

    return 0;
}